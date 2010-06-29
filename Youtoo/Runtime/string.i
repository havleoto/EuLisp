;;; EuLisp system 'youtoo'
;;;   Interface file for module string

(definterface string
  (import (telos convert copy collect compare fpi)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert copy compare callback collect integer number fpi)
   export (
    ((name . member1-string) (pos . 54) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 (eul_str_member1 . ff_stub_eul_str_member1244)))
    ((name . eul_list_as_eul_string) (pos . 21) (origin string . eul_list_as_eul_string) (class . ff) (arity . 1) (ff (8) 6 (eul_list_as_eul_string . ff_stub_eul_list_as_eul_string2814)))
    ((name . tailstring) (pos . 53) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 (eul_tailstr . ff_stub_eul_tailstr243)))
    ((name . do1-string) (pos . 10) (origin string . do1-string))
    ((name . <string>) (pos . 13) (origin string . <string>) (class . constant))
    ((name . string-append) (pos . 11) (origin string . string-append))
    ((name . string-as-int) (pos . 23) (origin string . string-as-int) (class . ff) (arity . 1) (ff (3) 0 (atoi . ff_stub_atoi2816)))
    ((name . map1-string) (pos . 4) (origin string . map1-string))
    ((name . listify-string) (pos . 5) (origin string . listify-string))
    ((name . string-ref) (pos . 9) (origin boot1 . string-ref) (inline (G0090 (string-ref))) (setter (G00100 (set-string-ref))))
    ((name . string-empty?) (pos . 7) (origin string . string-empty?) (inline (G002617 (primitive-size) (fpi-zerop))))
    ((name . string-equal) (pos . 8) (origin string . string-equal) (inline (G002620 (call-foreign-function string-compare) (nobble 2) (fpi-zerop))))
    ((name . <character-sequence>) (pos . 2) (origin string . <character-sequence>) (class . constant))
    ((name . string?) (pos . 16) (origin boot1 . string?) (inline (G0043 (stringp))))
    ((name . string-compare) (pos . 17) (origin string . string-compare) (class . ff) (arity . 2) (ff (3 3) 0 (strcmp . ff_stub_strcmp2810)))
    ((name . string-size) (pos . 17) (origin boot1 . string-size) (inline (G0088 (primitive-size))))
    ((name . substring) (pos . 6) (origin string . substring))
    ((name . string-data) (pos . 12) (origin string . string-data) (inline (G002615 (static-ref0) (binding-ref ? <string>) (primitive-relative-ref))) (setter (G002622 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <string>) (set-primitive-relative-ref) (nobble 2))))
   )
   local-literals (
    (top-level . 111)
    (accumulate1-string . 110)
    (map1-string . 109)
    (listify-string . 108)
    (substring . 107)
    (string-empty? . 106)
    (string-equal . 105)
    (all?1-string . 104)
    (do1-string . 103)
    (string-append . 102)
    (string-data . 101)
    (anyp1-string . 100)
    (accumulate-string . 99)
    ((converter <string>) . 79)
    (<string> . 78)
    (converter . 77)
    (|(method deep-copy)| . 76)
    (|(method shallow-copy)| . 75)
    (|(method slice)| . 74)
    (|(method concatenate)| . 73)
    (|(method reverse!)| . 72)
    (|(method reverse)| . 71)
    (|(method size)| . 70)
    (|(method element)| . 69)
    (|(method member)| . 68)
    (|(method map)| . 67)
    (|(method do)| . 66)
    (|(method all?)| . 65)
    (|(method any?)| . 64)
    (|(method accumulate1)| . 63)
    (|(method accumulate)| . 62)
    (|(method binary<)| . 61)
    (|(method binary=)| . 60)
    (|(method emptyp)| . 59)
    (|(method initialize)| . 58)
    (|(setter string-data)| . 57)
    (string . 56)
    (data . 55)
    (abstractp: . 54)
    (direct-keywords: . 53)
    (direct-slots: . 52)
    (direct-superclasses: . 51)
    (character-sequence . 50)
    (name: . 49)
    (fill-value: . 46)
    (size: . 45)
    (anonymous . 28)
   )
   literals (
   )
))
