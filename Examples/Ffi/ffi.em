(defmodule ffi
  (syntax (macros)
   import (level1))

(defextern ext_get_struct () ptr)
(defextern ext_print_struct (ptr) ptr)
(deflocal structs '())

(let loop ((n 0))
     (cond ((< n 50)
            (let ((s (ext_get_struct)))
              (format "struct #~d~%" n)
              (prin "  ")
              (ext_print_struct s)
              (prin "  ")
              (write s)
              (setq structs (cons s structs))
              (loop (+ n 1))))
           (t
            (print "*** Finished creating"))))

(do (lambda (s) (ext_print_struct s)) structs)

;;;-----------------------------------------------------------------------------
)  ;; End of module
;;;-----------------------------------------------------------------------------
