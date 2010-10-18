;;; EuLisp system 'youtoo'
;;;   Interface file for module ex-syntax

(definterface ex-syntax
  (import (i-all i-modify p-env sx-obj sx-node cg-interf)
   syntax (_macros _i-aux0 _sx-obj0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all i-modify sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-interf)
   export (
    ((name . expand-syntax-import) (pos . 4) (origin ex-syntax . expand-syntax-import))
    ((name . expand-old-syntax-imports) (pos . 7) (origin ex-syntax . expand-old-syntax-imports))
    ((name . import-syntax-module) (pos . 3) (origin ex-syntax . import-syntax-module))
   )
   local-literals (
    (top-level . 79)
    (import-syntax-binding . 78)
    (import-syntax-module . 77)
    (expand-syntax-import . 76)
    (make-prefix . 75)
    (syntax-import-expander . 74)
    (expand-old-syntax-imports . 73)
    (install-syntax-import-expander . 72)
    (register-imported-syntax-module . 71)
    ("redefinition of expander ~a" . 67)
    ("no syntax-import expander ~a available" . 64)
    ("no syntax-import expander ~a available" . 63)
    (|(method G004665)| . 57)
    ("  Import syntax module ~a ..." . 56)
    (*actual-module* . 54)
    ("cannot import syntax module ~a" . 53)
    ("compile time error condition: " . 52)
    ("external syntax binding ~a not available in module" . 48)
    (prefix . 46)
    (rename . 45)
    (except . 44)
    (only . 43)
    (|(method G004713)| . 41)
    ("bad syntax only syntax" . 39)
    ("compile time error condition: " . 38)
    (|(method G004737)| . 34)
    ("bad syntax except syntax" . 32)
    ("compile time error condition: " . 31)
    (|(method G004763)| . 27)
    ("bad syntax rename syntax" . 25)
    ("compile time error condition: " . 24)
    (|(method G004793)| . 19)
    (anonymous . 18)
    (ct-error-value: . 16)
    ("bad syntax prefix syntax" . 15)
    ("compile time error condition: " . 14)
   )
   literals (
   )
))
