;;; EuLisp system 'youtoo'
;;;   Interface file for module _macros

(definterface _macros
  (import (level1 _telos0 _stream0)
   syntax (_boot0)
   full-import (symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos level1 _mop-defcl0 _mop-meth0 _mop-gf0 _boot0 _telos0 _stream0)
   export (
    ((name . defgeneric) (pos . 2) (origin _mop-gf0 . defgeneric))
    ((name . dynamic-let) (pos . 12) (origin _macros . dynamic-let))
    ((name . defmethod-sig) (pos . 8) (origin _mop-meth0 . defmethod-sig))
    ((name . dynamic-setq) (pos . 15) (origin _macros . dynamic-setq))
    ((name . defmethod-domain) (pos . 4) (origin _mop-meth0 . defmethod-domain))
    ((name . match-let) (pos . 2) (origin _stream0 . match-let))
    ((name . with-source) (pos . 5) (origin _stream0 . with-source))
    ((name . butlast) (pos . 13) (origin _macros . butlast))
    ((name . dynamic) (pos . 19) (origin _macros . dynamic))
    ((name . method-function-lambda) (pos . 6) (origin _mop-meth0 . method-function-lambda))
    ((name . last) (pos . 5) (origin _macros . last))
    ((name . return-from) (pos . 14) (origin _macros . return-from))
    ((name . not) (pos . 10) (origin _macros . not))
    ((name . defmethod-body) (pos . 7) (origin _mop-meth0 . defmethod-body))
    ((name . get-global-register) (pos . 5) (origin _boot0 . get-global-register))
    ((name . unless) (pos . 7) (origin _boot0 . unless))
    ((name . set-global-register) (pos . 6) (origin _boot0 . set-global-register))
    ((name . named-method-function-lambda) (pos . 10) (origin _mop-meth0 . named-method-function-lambda))
    ((name . with-output-file) (pos . 3) (origin _stream0 . with-output-file))
    ((name . block) (pos . 6) (origin _macros . block))
    ((name . or) (pos . 8) (origin _boot0 . or))
    ((name . case) (pos . 2) (origin _macros . case))
    ((name . catch) (pos . 20) (origin _macros . catch))
    ((name . throw) (pos . 18) (origin _macros . throw))
    ((name . with-input-file) (pos . 8) (origin _stream0 . with-input-file))
    ((name . with-handler) (pos . 3) (origin _macros . with-handler))
    ((name . generic-lambda) (pos . 5) (origin _mop-gf0 . generic-lambda))
    ((name . for) (pos . 9) (origin _macros . for))
    ((name . defmethod) (pos . 5) (origin _mop-meth0 . defmethod))
    ((name . cond) (pos . 3) (origin _boot0 . cond))
    ((name . method-lambda) (pos . 3) (origin _mop-meth0 . method-lambda))
    ((name . defclass) (pos . 11) (origin _mop-defcl0 . defclass))
    ((name . let/cc) (pos . 4) (origin _macros . let/cc))
    ((name . defprimclass) (pos . 5) (origin _mop-defcl0 . defprimclass))
    ((name . time) (pos . 17) (origin _macros . time))
    ((name . defmethod-args) (pos . 2) (origin _mop-meth0 . defmethod-args))
    ((name . unwind-protect) (pos . 8) (origin _macros . unwind-protect))
    ((name . with-input-file-of-path) (pos . 4) (origin _stream0 . with-input-file-of-path))
    ((name . and) (pos . 4) (origin _boot0 . and))
    ((name . when) (pos . 2) (origin _boot0 . when))
    ((name . with-lock) (pos . 7) (origin _stream0 . with-lock))
    ((name . with-sink) (pos . 6) (origin _stream0 . with-sink))
    ((name . defcondition) (pos . 16) (origin _macros . defcondition))
    ((name . defglobal) (pos . 7) (origin _macros . defglobal))
    ((name . while) (pos . 11) (origin _macros . while))
    ((name . defmethod-keywords) (pos . 9) (origin _mop-meth0 . defmethod-keywords))
   )
   local-literals (
    (case . 98)
    (with-handler . 97)
    (last . 96)
    (block . 95)
    (defglobal . 94)
    (for . 93)
    (not . 92)
    (butlast . 91)
    (return-from . 90)
    (dynamic-setq . 89)
    (defcondition . 88)
    (time . 87)
    (throw . 86)
    (catch . 85)
    (dynamic-let . 83)
    (sformat . 79)
    ("real: ~a
user: ~a
system: ~a
" . 78)
    (vector-ref . 77)
    (time-stop . 76)
    (time-start . 75)
    ("time" . 74)
    ("time" . 73)
    (defclass . 71)
    (<condition> . 70)
    (setter . 68)
    (dynamic-variable-ref . 67)
    (reverse-list . 64)
    (unwind-protect . 62)
    (break . 59)
    (labels . 58)
    (when . 57)
    (while . 54)
    (cons . 52)
    (dynamic . 51)
    (lambda . 50)
    (pop-dynamic-variables . 49)
    (*clean-ups* . 48)
    (push-dynamic-variable . 46)
    (let/cc . 44)
    (list-drop . 42)
    (- . 41)
    (list-size . 40)
    (call/ep . 38)
    (named-lambda . 37)
    (call/ep-lambda . 36)
    (pop-error-handlers . 34)
    (progn . 33)
    (push-error-handler . 32)
    (let . 30)
    (cond . 29)
    (anonymous . 28)
    ("*** WARNING: missing else branch in (case ... ~a)" . 27)
    (member . 25)
    (null? . 24)
    (eql . 23)
    (quote . 22)
    (else . 21)
   )
   literals (
   )
))
