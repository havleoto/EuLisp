;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;;  Title: Mapping of Lisp-Identifiers to C-Identifiers
;;;  Description:
;;;  Documentation:
;;    The following prefixes are used to avoid unnecessary number suffixes:
;;    This would be the case because
;;    1. there are different name spaces (symbols, dynamics and lexicals)
;;    2. deleting '<' and '>' in class names may result in already existing
;;    identifiers, for example <cons> -> cons
;;    3. we need identifiers for C-things and for the corresponding Lisp-Objects
;;    (especially in the case of functions: C-function and Lisp-function-object)
;;    c_<class-name> : class object
;;    t_<class-name> : type which corresponds to class c_<class-name>
;;    i_<class-name> : an instance of class c_<class-name>
;;    s_<symbol-name>: symbol
;;    f_<function-id>: function object for the function <function-id>
;;;  Notes:
;;    The naming algorithm assumes that prefixing an unique identifier causes no name
;;    conflict with included C-identifier, C-keywords and identifiers generated by
;;    Eu2C. The same is assumed when changing the prefix
;;    (for example from c_pair to t_pair).
;;;  Requires:
;;;  Problems:
;;;  Authors: Ingo Mohr
;;;-----------------------------------------------------------------------------

#module code-identifier
(import (level-0-eulisp
         lzs
         accessors
         binding
         lzs-mop
         export
         expand-literal
         tail-module whc-classes
         (only (position-if
                substitute-if
                delete-if-not
                find
                find-if-not
                assoc
                copy-tree
                format
                substitute
                string-downcase
                string
                string-capitalize
                char
                alpha-char-p
                alphanumericp
                lower-case-p
                upper-case-p
                mapcar mapc
                copy-seq
                subseq)
               common-lisp))
 syntax (level-0-eulisp
         dynamic
         (only (when
                unless
                unwind-protect)
               common-lisp))
 export (c-identifier
         type-identifier
         local-c-identifier
         reset-code-identifier
         name-global-object
         name-exported-object
         main-function-id
         export-identifier
         exporting-module
         extend-identifier-table))

;;;-----------------------------------------------------------------------------
;;; c-identifier, asm-identifier and type-identifier
;;;-----------------------------------------------------------------------------

(defun c-identifier (object)
  (string
   (or (?code-identifier object)
       (setf (?code-identifier object)
             (make-unique-identifier object
                                     (make-c-identifier (lisp-identifier object)))))))

(defun type-identifier (class)
  ;;?type-identifier should be already set by name-global-object
  (?type-identifier class))

(defun local-c-identifier (object)
  (dynamic-let ((*identifier-table* (dynamic *local-identifier-table*))
                (*capitalize* ()))
               (unwind-protect
                   (c-identifier object)
                 (dynamic-setq *local-identifier-table*
                               (dynamic *identifier-table*)))))

(defun lisp-identifier (object)
  ;; gets the identifier in ?identifier
  ;; if the id is a list then ?identifier is set by transforming the list into a
  ;; string
  (let ((id (?identifier object)))
    (when (consp id)
          (setq id (make-eulisp-symbol (format () "~{~A~^ ~}" id)))
          (setf (?identifier object) id))
    id))

(defun reset-code-identifier ()
  (dynamic-setq *identifier-table*
                (copy-tree $reserved-identifiers)))

(defun make-identifier-table-entry (id)
  (cons (if (stringp id)
            (make-symbol id)
          id)
        0))

(defun extend-identifier-table (id)
  (dynamic-setq *identifier-table*
                (cons (make-identifier-table-entry id)
                      (dynamic *identifier-table*))))

(defmacro with-local-identifiers forms
  `(dynamic-let ((*local-identifier-table*
                  (copy-tree (dynamic *identifier-table*))))
                ,@forms))

(defun main-function-id (module)
  (if (?exports module)
      (format () "initialize_~A" (?code-identifier module))
    "main"))

;;;-----------------------------------------------------------------------------
;;;
;;;-----------------------------------------------------------------------------

(defconstant $generated-identifier-prefix "G")

(defconstant $chars-substituted-by-underscore "_-+$.=*/!?% ")

(defconstant $basic-class-type-ids
  `((,%unsigned-byte-integer . "unsigned char")
    (,%signed-byte-integer . "signed char")
    (,%unsigned-half-integer . "unsigned short")
    (,%signed-half-integer . "signed short")
    (,%unsigned-word-integer . "unsigned long")
    (,%signed-word-integer . "signed long")
    (,%single-float . "float")
    (,%double-float . "double")
    (,%extended-float . "long double")
    (,%string . "char*")
    (,%function . "function") ; explicitely defined for Lisp
    (,%sighandler . "sighandler_t")
    (,%void . "void") ;*8*
    (,%jmpbuf . "jmp_buf")
    (,%pjmpbuf . "jmp_buf*")
    ))

(defconstant $reserved-identifiers
  (mapcar #'make-identifier-table-entry
          '(;--- ANSI C
            "auto"
            "break"
            "case"
            "char"
            "const"
            "continue"
            "default"
            "do"
            "double"
            "else"
            "enum"
            "extern"
            "float"
            "for"
            "goto"
            "if"
            "int"
            "long"
            "main"
            "register"
            "return"
            "short"
            "signed"
            "sizeof"
            "static"
            "struct"
            "switch"
            "typedef"
            "union"
            "unsigned"
            "void"
            "volatile"
            "while"
            ;; --- standard libraries
            "jmp_buf"
            ;; --- GNU C
            "asm"
            "typeof"
            "inline"
            ;; --- X ---
            "Object"
            ;; --- C-code generation
            "function"
            "G"        ;to avoid 'G' as the first generated identifier
            "NIL"
            "AUX"
            "V_LITERAL"
            "S_LITERAL"
            "LITERAL"
            "SMALL_INT_SKIP"
            "STRUCTURE_ROOTS"
            "VECTOR_ROOTS"
            "VARIABLE_ROOTS"
            "add_to_root_set"
            "INITIALIZE_GC"
            "SET_NIL"
            )))

;;;-----------------------------------------------------------------------------
;;; global variables
;;;-----------------------------------------------------------------------------

(defvar *identifier-table* ())

(defvar *local-identifier-table* ())

(defvar *capitalize* ())

(deflocal *max-identifier-size* ())
;; () means no truncation of identifiers
;; if a number is given (>0) then all identifiers are truncated to the given
;; length before adding specific prefixes and suffixes to make ids unique

;;;-----------------------------------------------------------------------------
;;; Prefixing Identifiers
;;;-----------------------------------------------------------------------------

(defun replace-prefix (new-prefix-char name)
  (setq name (copy-seq name))
  (setf (char name 0) new-prefix-char)
  name)

(defun add-prefix (prefix-char name)
  (format () "~A__~A" prefix-char name))

(defun add-prefix&module-id (prefix-char name object)
  (format () "~@[~A__~]~A__~A"
          prefix-char
          name
          (?code-identifier (or (exporting-module object)
                                (?module object)))))

;;;-----------------------------------------------------------------------------
;;; identifier generation for exported objects
;;;-----------------------------------------------------------------------------

(defvar *identifier-for-export* ())

(defun check-c-unique (string)
  ;;
  ;; This function must check a given name if it
  ;; 1. it cannot conflict with usual identifiers of C (functions, variables, and
  ;;    also macros)
  ;; 2. any prefixing with a one-lowercase-letter&underscore-prefix (e.g. 'c_')
  ;;    doesn't result in name conflicts
  ;;see also make-c-unique
  (when (and
         (> (length string) 2)
         (lower-case-p (char string 0))
         (eql (char string 1) #\_)
         (or
          (upper-case-p (char string 2)) ; all global id's begin with
          ;; upper-case
          (eql (char string 2) #\_)))
        (format t "~%!!!!exportierter Id nicht fuer C geeignet: ~A" string))
  (if (dynamic *capitalize*)
      (string-capitalize string)
    string))

(defun x-identifier (object)
  (dynamic-let ((*identifier-for-export* t))
               (string
                (or (?code-identifier object)
                    ;;(and (?code-identifier object)
                    ;;     (check-x-identifier (?code-identifier object)))
                    (setf (?code-identifier object)
                          (make-unique-identifier
                           object
                           (make-x-identifier (lisp-identifier object))))))))

(defun check-for-non-c-id-chars (string)
  (when (find-if-not (lambda (char)
                       (or (alphanumericp char) (eql char #\_)))
                     string)
        (format t "~%!!!!exportierter Id nicht fuer C geeignet: ~A" string))
  string)

(defun check-x-identifier (id)
  (when (symbolp id) (setq id (symbol-name id)))
  (check-c-unique (check-for-non-c-id-chars id))
  id)

(defun x-delete-leading-and-terminating-nonalpha (string)
  (cond ((eql #\% (char string 0))
         (subseq string 1 (length string)))
        ((and (eql #\< (char string 0))
              (eql #\> (char string (- (length string) 1))))
         (subseq string 1 (- (length string) 1)))
        (t string)))

(defun x-substitute-with-underscore (string)
  (substitute #\_ #\- string))

(defgeneric make-x-identifier (identifier))

(defmethod make-x-identifier ((identifier <null>))
  ())

(defmethod make-x-identifier ((identifier <symbol>))
  (make-x-identifier (symbol-name identifier)))

(defmethod make-x-identifier ((constituent-list <pair>))
  (make-x-identifier (format () "~{~A~^_~}" constituent-list)))

(defmethod make-x-identifier ((identifier <string>))
  (check-c-unique
   (check-for-non-c-id-chars
    (x-substitute-with-underscore
     (x-delete-leading-and-terminating-nonalpha
      identifier)))))

;;;-----------------------------------------------------------------------------
;;;
;;;-----------------------------------------------------------------------------
(defun reduce-length (string)
  (if (and *max-identifier-size*
           (> (length string) *max-identifier-size*))
      (subseq string 0 *max-identifier-size*)
    string))

(defun c-alpha-char-p (char)
  (or (alpha-char-p char) (eql char #\_)))

(defun c-alphanumeric-char-p (char)
  (or (alphanumericp char) (eql char #\_)))

(defun delete-leading-and-terminating-nonalpha (string)
  (let ((start (position-if #'c-alpha-char-p string))
        (end (position-if #'alphanumericp string :from-end t)))
    (cond ((null? start) $generated-identifier-prefix)
          ((and (= start 0)
                (= (+ end 1) (length string)))
           string)
          (t (subseq string start (+ end 1))))))

(defun substitute-with-underscore (string)
  (substitute-if #\_
                 (lambda (char) (find char $chars-substituted-by-underscore))
                 string))

(defun delete-non-c-id-chars (string)
  (delete-if-not #'c-alphanumeric-char-p string))

(defun make-c-unique (string)
  ;; This function must transform a given name such that
  ;; 1. it cannot conflict with usual identifiers of C (functions, variables, and
  ;;    also macros)
  ;; 2. any prefixing with a one-lowercase-letter&underscore-prefix (e.g. 'c_')
  ;;    doesn't result in name conflicts
  ;; NOTE: The following solution is not safe. It assumes that
  ;; a) putting the module-id into the c-identifier prevents conflicts with local
  ;; objects
  ;; b) functions, variables and constants are named in such a way, that their
  ;; names are not mapped to <identifier>__<identifier>* by the preceding
  ;; identifier transformation steps or that this results not in a name conflict
  (if (dynamic *capitalize*)
      (string-capitalize string)
    string))

(defgeneric make-c-identifier (identifier))

(defmethod make-c-identifier ((identifier <null>))
  ())    ;old: $generated-identifier-prefix)

(defmethod make-c-identifier ((identifier <symbol>))
  (make-c-identifier
   (string-downcase
    (symbol-name identifier))))

(defmethod make-c-identifier ((constituent-list <pair>))
  (make-c-identifier (format () "~{~A~^_~}" constituent-list)))

(defmethod make-c-identifier ((identifier <string>))
  (reduce-length
   (make-c-unique
    (delete-non-c-id-chars
     (substitute-with-underscore
      (delete-leading-and-terminating-nonalpha
       identifier))))))

;;;-----------------------------------------------------------------------------
;;;
;;;-----------------------------------------------------------------------------
(defun make-unique-id (name)
  (let* ((sym (make-symbol name))
         (entry (assoc sym (dynamic *identifier-table*))))
    (if entry
        (progn
          (when (dynamic *identifier-for-export*)
                (format t "~%!!!!Namenskonflikt bei export fuer h-File: ~A" name))
          (setf (cdr entry) (+ 1 (cdr entry)))
          (make-unique-id (format () "~A_~D" name (cdr entry))))
      (progn
        (dynamic-setq *identifier-table*
                      `((,sym . 0) ,@(dynamic *identifier-table*)))
        name))))

(defgeneric make-unique-identifier (object name))

(defmethod make-unique-identifier (object name)
  ;; the default case: no prefixing or other special handling necessary
  (make-unique-id name))

(defmethod make-unique-identifier (object (name <null>))
  (make-unique-identifier object $generated-identifier-prefix))

(defmethod make-unique-identifier ((inst <literal-instance>) (name <null>))
  (make-unique-id (replace-prefix #\i (c-identifier (?class inst)))))

(defmethod make-unique-identifier ((class <defined-sym>) name)
  (make-unique-id (add-prefix #\s name)))

(defmethod make-unique-identifier ((method <method-def>) name)
  (make-unique-id
   (add-prefix #\m
               (c-identifier (~method-generic-function method)))))

(defmethod make-unique-identifier ((binding <binding>) name)
  (c-identifier (finally-refered-object binding)))

(defmethod make-unique-identifier ((class <defined-class>) name)
  (make-unique-id
   (add-prefix&module-id #\c name class)))

(defmethod make-unique-identifier ((var <global-static>) name)
  (make-unique-id
   (add-prefix&module-id () name var)))

(defmethod make-unique-identifier ((const <defined-named-const>) name)
  (make-unique-id
   (add-prefix&module-id () name const)))

(defmethod make-unique-identifier ((fun <defined-fun>) name)
  (make-unique-id
   (add-prefix&module-id () name fun)))

(defmethod make-unique-identifier ((gf <defined-generic-fun>) name)
  (make-unique-id
   (add-prefix&module-id () name gf)))

;;;-----------------------------------------------------------------------------
;;; naming global objects
;;;-----------------------------------------------------------------------------

(defgeneric name-global-object (obj))

(defmethod name-global-object (obj)
  ;; do nothing
  ())

(defmethod name-global-object ((class <defined-class>))
  (setf (?code-identifier (expand-literal class))
        (c-identifier class))
  (unless (?type-identifier class)
          (setf (?type-identifier class)
                (replace-prefix #\t (c-identifier class))))
  ;; now setting the identifiers of the slots
  (dynamic-let ((*identifier-table* (copy-tree $reserved-identifiers))
                ;;slot identifiers must be different from reserved keywords only
                (*capitalize* ()))
               (mapc #'c-identifier
                     (?effective-slots class))))

(defmethod name-global-object ((class <imported-class>))
  (unless (?type-identifier class)
          (setf (?type-identifier class)
                (replace-prefix #\t (c-identifier class))))
  )

(defmethod name-global-object ((class <basic-class-def>))
  ;;  (setf (?code-identifier (expand-literal class))
  ;;        (c-identifier class))
  (let ((type-id (cdr (assoc class $basic-class-type-ids))))
    (when type-id
          (setf (?type-identifier class) type-id))))

(defmethod name-global-object ((fun <simple-fun>))
  (let ((id (c-identifier fun)))
    (when (?expanded-literal fun)
          (setf (?code-identifier (?expanded-literal fun))
                (add-prefix #\f id)))))

(defmethod name-global-object ((gf <generic-fun>))
  (let ((gf-id (c-identifier gf)))
    (mapc #'name-global-object
          (~generic-function-methods gf))
    ;; the methods are named first to make it sure that in the case of only one
    ;; method the method function which appears as discriminating function is
    ;; already named
    (unless (?code-identifier
             (~generic-function-discriminating-function gf))
            (setf (?code-identifier
                   (~generic-function-discriminating-function gf))
                  gf-id))
    (name-global-object (~generic-function-discriminating-function gf))
    (when (?expanded-literal gf)
          (setf (?code-identifier (?expanded-literal gf))
                (add-prefix #\f gf-id)))
    ))

(defmethod name-global-object ((fun <discriminating-fun>))
  ;; the naming of (generated) discriminating functions is done by the naming
  ;; method of the generic function
  ())

(defmethod name-global-object ((method <method-def>))
  (name-global-object (~method-function method))
  (when (?expanded-literal method)
        (setf (?code-identifier (?expanded-literal method))
              (add-prefix #\m (c-identifier (~method-function method)))))
  )

(defmethod name-global-object ((sym <sym>))
  (setf (?code-identifier (expand-literal sym))
        (c-identifier sym)))

(defmethod name-global-object ((var <var>))
  (c-identifier var))

(defmethod name-global-object ((const <named-const>))
  (if (fun-p (?value const))
      (name-global-object (?value const))
    (c-identifier const)))

(defmethod name-global-object ((object <null>))
  (let ((lit (expand-literal () )))
    (setf (?identifier lit) "empty-list")
    (c-identifier lit)))

(defmethod name-global-object ((module <module>))
  (setf (?code-identifier module)
        (delete-if-not #'alphanumericp
                       (string-capitalize
                        (make-x-identifier (?identifier module))))))

;;;-----------------------------------------------------------------------------
;;; naming exported objects
;;;-----------------------------------------------------------------------------

(defgeneric name-exported-object (object))

(defmethod name-exported-object (obj)
  ;; do nothing
  ())

(defmethod name-exported-object ((binding <binding>))
  (x-identifier binding) ; sets code-identifier as a side effect
  (setf (?code-identifier (finally-refered-object binding))
        (c-identifier (finally-refered-object binding))))

(defmethod name-exported-object ((class <defined-class>))
  (setf (?code-identifier (expand-literal class))
        (x-identifier class))
  (unless (?type-identifier class)
          (setf (?type-identifier class)
                (replace-prefix #\t (c-identifier class))))
  ;; now setting the identifiers of the slots
  (dynamic-let ((*identifier-table* (copy-tree $reserved-identifiers))
                ;;slot identifiers must be different from reserved keywords only
                (*capitalize* ()))
               (mapc #'c-identifier
                     (?effective-slots class))))

(defmethod name-exported-object ((class <basic-class-def>))
  (setf (?code-identifier (expand-literal class))
        (x-identifier class))
  (let ((type-id (cdr (assoc class $basic-class-type-ids))))
    (when type-id
          (setf (?type-identifier class) type-id))))

(defmethod name-exported-object ((fun <defined-fun>))
  (let ((id (x-identifier fun)))
    (when (?expanded-literal fun)
          (setf (?code-identifier (?expanded-literal fun))
                (add-prefix #\f id)))))

(defmethod name-exported-object ((gf <defined-generic-fun>))
  (let ((gf-id (x-identifier gf)))
    (setf (?code-identifier
           (~generic-function-discriminating-function gf))
          gf-id)
    (when (?expanded-literal gf)
          (setf (?code-identifier (?expanded-literal gf))
                (add-prefix #\f gf-id)))))

(defmethod name-exported-object ((fun <discriminating-fun>))
  ;; the naming of (generated) discriminating functions is done by the naming
  ;; method of the generic function
  ())

(defmethod name-exported-object ((sym <sym>))
  (setf (?code-identifier (expand-literal sym))
        (x-identifier sym)))

(defmethod name-exported-object ((var <var>))
  (x-identifier var))

(defmethod name-exported-object ((const <named-const>))
  (if (fun-p (?value const))
      (name-exported-object (?value const))
    (x-identifier const)))

#module-end
