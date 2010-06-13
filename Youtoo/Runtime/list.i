;;; EuLisp system 'youtoo'
;;;   Interface file for module list

(definterface list
  (import (telos convert compare collect copy number fpi)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert callback compare collect copy number integer fpi)
   export (
    ((name . car) (pos . 27) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . cadddr) (pos . 11) (origin list . cadddr) (inline (G003650 (cadddr))))
    ((name . caar) (pos . 27) (origin list . caar) (inline (G003619 (caar))))
    ((name . cdadr) (pos . 22) (origin list . cdadr) (inline (G003629 (cadr) (cdr))))
    ((name . as-proper-list) (pos . 9) (origin list . as-proper-list))
    ((name . accumulate-list) (pos . 18) (origin list . accumulate-list))
    ((name . list) (pos . 23) (origin boot1 . list))
    ((name . caaar) (pos . 25) (origin list . caaar) (inline (G003644 (caar) (car))))
    ((name . cadar) (pos . 20) (origin list . cadar) (inline (G003641 (cdar) (car))))
    ((name . cdaar) (pos . 24) (origin list . cdaar) (inline (G003638 (caar) (cdr))))
    ((name . member1-list) (pos . 29) (origin boot . member1-list) (inline (G00140 (static-ref-nil) (memq))))
    ((name . init-list-ref) (pos . 28) (origin boot . init-list-ref))
    ((name . cadr) (pos . 21) (origin list . cadr) (inline (G003621 (cadr))))
    ((name . anyp1-list) (pos . 27) (origin boot . anyp1-list))
    ((name . cdddr) (pos . 29) (origin list . cdddr) (inline (G003647 (cddr) (cdr))))
    ((name . reverse-list!) (pos . 6) (origin list . reverse-list!))
    ((name . do1-list-last-special) (pos . 8) (origin list . do1-list-last-special))
    ((name . cddar) (pos . 5) (origin list . cddar) (inline (G003632 (cdar) (cdr))))
    ((name . find1-list) (pos . 4) (origin list . find1-list))
    ((name . list-size) (pos . 8) (origin boot . list-size))
    ((name . reverse-list) (pos . 24) (origin boot . reverse-list))
    ((name . map1-list-last-special) (pos . 19) (origin list . map1-list-last-special))
    ((name . atom?) (pos . 35) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . <cons>) (pos . 71) (origin mop-class . <cons>) (class . constant))
    ((name . cdr) (pos . 34) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . listp) (pos . 13) (origin boot1 . listp) (inline (G0055 (listp))))
    ((name . consp) (pos . 12) (origin boot1 . consp) (inline (G0047 (consp))))
    ((name . list-ref) (pos . 21) (origin boot . list-ref))
    ((name . cdar) (pos . 3) (origin list . cdar) (inline (G003623 (cdar))))
    ((name . select-list) (pos . 26) (origin list . select-list))
    ((name . list-drop) (pos . 2) (origin list . list-drop))
    ((name . member-list) (pos . 20) (origin boot . member-list))
    ((name . accumulate1-list) (pos . 15) (origin list . accumulate1-list))
    ((name . null?) (pos . 9) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . proper-list?) (pos . 17) (origin list . proper-list?))
    ((name . slice-list) (pos . 28) (origin list . slice-list))
    ((name . map2-list) (pos . 10) (origin list . map2-list))
    ((name . <null>) (pos . 25) (origin mop-class . <null>) (class . constant))
    ((name . assoc-list-ref) (pos . 16) (origin boot . assoc-list-ref))
    ((name . <list>) (pos . 63) (origin mop-class . <list>) (class . constant))
    ((name . cddr) (pos . 12) (origin list . cddr) (inline (G003625 (cddr))))
    ((name . do1-list) (pos . 4) (origin boot . do1-list))
    ((name . caddr) (pos . 23) (origin list . caddr) (inline (G003627 (caddr))))
    ((name . caadr) (pos . 14) (origin list . caadr) (inline (G003635 (cadr) (car))))
    ((name . map1-list) (pos . 15) (origin boot . map1-list))
    ((name . do2-list) (pos . 13) (origin list . do2-list))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 163)
    (list-drop . 162)
    (cdar . 161)
    (find1-list . 160)
    (cddar . 159)
    (reverse-list! . 158)
    (allp2-list . 157)
    (do1-list-last-special . 156)
    (as-proper-list . 155)
    (map2-list . 154)
    (cadddr . 153)
    (cddr . 152)
    (do2-list . 151)
    (caadr . 150)
    (accumulate1-list . 149)
    (allp1-list . 148)
    (proper-list? . 147)
    (accumulate-list . 146)
    (map1-list-last-special . 145)
    (cadar . 144)
    (cadr . 143)
    (cdadr . 142)
    (caddr . 141)
    (cdaar . 140)
    (caaar . 139)
    (select-list . 138)
    (caar . 137)
    (slice-list . 136)
    (cdddr . 135)
    (|(method binary/)| . 95)
    (|(method binary-)| . 94)
    (|(method binary+)| . 93)
    (|(method deep-copy)| . 92)
    (|(method shallow-copy)| . 91)
    ((converter <list>) . 90)
    ((converter <list>) . 89)
    (<list> . 88)
    (converter . 87)
    (|(method accumulate1)| . 86)
    (|(method accumulate)| . 85)
    (|(method slice)| . 84)
    (|(method concatenate)| . 83)
    (|(method remove)| . 82)
    (|(method sort)| . 81)
    (|(method reverse!)| . 80)
    (|(method reverse)| . 79)
    (|(method select)| . 78)
    (|(method allp)| . 77)
    (|(method anyp)| . 76)
    (|(method find)| . 75)
    (|(method member)| . 74)
    (|(method size)| . 73)
    (|(method (setter element))| . 72)
    (|(method element)| . 71)
    (|(method map)| . 70)
    (|(method do)| . 69)
    (|(method binary=)| . 68)
    (anonymous . 32)
   )
   literals (
   )
))
