;;; EuLisp system 'youtoo'
;;;   Interface file for module list

(definterface list
  (import (telos convert compare collect copy number fpi)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert callback compare collect copy number integer fpi)
   export (
    ((name . cdaddr) (pos . 44) (origin list . cdaddr) (inline (G003719 (cddr) (cdar))) (setter (G003803 (stack-ref 1) (caddr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . as-proper-list) (pos . 16) (origin list . as-proper-list))
    ((name . member1-list) (pos . 33) (origin boot . member1-list) (inline (G00141 (static-ref-nil) (memq))))
    ((name . caaar) (pos . 34) (origin list . caaar) (inline (G003681 (caar) (car))) (setter (G003764 (stack-ref 1) (caar) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . cdaar) (pos . 33) (origin list . cdaar) (inline (G003675 (caar) (cdr))) (setter (G003758 (stack-ref 1) (caar) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . init-list-ref) (pos . 32) (origin boot . init-list-ref))
    ((name . anyp1-list) (pos . 31) (origin boot . anyp1-list))
    ((name . cdddr) (pos . 43) (origin list . cdddr) (inline (G003684 (cddr) (cdr))) (setter (G003767 (stack-ref 1) (cddr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . cons?) (pos . 44) (origin boot1 . cons?) (inline (G0047 (consp))))
    ((name . do1-list-last-special) (pos . 15) (origin list . do1-list-last-special))
    ((name . member-alist) (pos . 42) (origin list . member-alist))
    ((name . caaddr) (pos . 14) (origin list . caaddr) (inline (G003696 (cddr) (caar))) (setter (G003779 (stack-ref 1) (caddr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . reverse-list) (pos . 28) (origin boot . reverse-list))
    ((name . caaaar) (pos . 13) (origin list . caaaar) (inline (G003687 (caar) (caar))) (setter (G003770 (stack-ref 1) (caar) (car) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . atom?) (pos . 37) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . cdaadr) (pos . 41) (origin list . cdaadr) (inline (G003713 (cadr) (cdar))) (setter (G003797 (stack-ref 1) (cadr) (car) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . <cons>) (pos . 82) (origin mop-class . <cons>) (class . constant))
    ((name . cddadr) (pos . 12) (origin list . cddadr) (inline (G003725 (cadr) (cddr))) (setter (G003809 (stack-ref 1) (cadr) (cdr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . list-ref) (pos . 26) (origin boot . list-ref))
    ((name . cdddar) (pos . 11) (origin list . cdddar) (inline (G003728 (cdar) (cddr))) (setter (G003812 (stack-ref 1) (cdar) (cdr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . caadar) (pos . 21) (origin list . caadar) (inline (G003693 (cdar) (caar))) (setter (G003776 (stack-ref 1) (cdar) (car) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . member-list) (pos . 27) (origin boot . member-list))
    ((name . slice-list) (pos . 40) (origin list . slice-list))
    ((name . <null>) (pos . 28) (origin mop-class . <null>) (class . constant))
    ((name . assoc-list-ref) (pos . 22) (origin boot . assoc-list-ref) (inline (G00143 (stack-ref 0) (stack-ref 2) (static-ref-nil) (assq) (nobble 2))))
    ((name . <list>) (pos . 74) (origin mop-class . <list>) (class . constant))
    ((name . cddr) (pos . 20) (origin list . cddr) (inline (G003662 (cddr))) (setter (G003743 (stack-ref 1) (cdr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . map1-list) (pos . 11) (origin boot . map1-list))
    ((name . caddr) (pos . 32) (origin list . caddr) (inline (G003664 (caddr))) (setter (G003746 (stack-ref 1) (cddr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . car) (pos . 29) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . cadddr) (pos . 19) (origin list . cadddr) (inline (G003708 (cadddr))) (setter (G003791 (stack-ref 1) (cddr) (cdr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . caar) (pos . 39) (origin list . caar) (inline (G003656 (caar))) (setter (G003734 (stack-ref 1) (car) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . cdadr) (pos . 31) (origin list . cdadr) (inline (G003666 (cadr) (cdr))) (setter (G003749 (stack-ref 1) (cadr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . cadadr) (pos . 18) (origin list . cadadr) (inline (G003702 (cadr) (cadr))) (setter (G003785 (stack-ref 1) (cadr) (cdr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . accumulate-list) (pos . 26) (origin list . accumulate-list))
    ((name . list) (pos . 25) (origin boot1 . list))
    ((name . cadar) (pos . 29) (origin list . cadar) (inline (G003678 (cdar) (car))) (setter (G003761 (stack-ref 1) (cdar) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . cddaar) (pos . 28) (origin list . cddaar) (inline (G003722 (caar) (cddr))) (setter (G003806 (stack-ref 1) (caar) (cdr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . cadr) (pos . 30) (origin list . cadr) (inline (G003658 (cadr))) (setter (G003737 (stack-ref 1) (cdr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . cddar) (pos . 9) (origin list . cddar) (inline (G003669 (cdar) (cdr))) (setter (G003752 (stack-ref 1) (cdar) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . find1-list) (pos . 8) (origin list . find1-list))
    ((name . cadaar) (pos . 7) (origin list . cadaar) (inline (G003699 (caar) (cadr))) (setter (G003782 (stack-ref 1) (caar) (cdr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . list-size) (pos . 19) (origin boot . list-size))
    ((name . cdaaar) (pos . 4) (origin list . cdaaar) (inline (G003710 (caar) (cdar))) (setter (G003794 (stack-ref 1) (caar) (car) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . map1-list-last-special) (pos . 27) (origin list . map1-list-last-special))
    ((name . caddar) (pos . 5) (origin list . caddar) (inline (G003705 (cdar) (cadr))) (setter (G003788 (stack-ref 1) (cdar) (cdr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . cdar) (pos . 6) (origin list . cdar) (inline (G003660 (cdar))) (setter (G003740 (stack-ref 1) (car) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . select-list) (pos . 37) (origin list . select-list))
    ((name . proper-list?) (pos . 25) (origin list . proper-list?))
    ((name . list-drop) (pos . 3) (origin list . list-drop))
    ((name . accumulate1-list) (pos . 24) (origin list . accumulate1-list))
    ((name . null?) (pos . 10) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . cddddr) (pos . 2) (origin list . cddddr) (inline (G003731 (cddr) (cddr))) (setter (G003815 (stack-ref 1) (cddr) (cdr) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . map2-list) (pos . 17) (origin list . map2-list))
    ((name . caaadr) (pos . 36) (origin list . caaadr) (inline (G003690 (cdr) (caar) (car))) (setter (G003773 (stack-ref 1) (cadr) (car) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . do1-list) (pos . 17) (origin boot . do1-list))
    ((name . cdadar) (pos . 35) (origin list . cdadar) (inline (G003716 (cdar) (cdar))) (setter (G003800 (stack-ref 1) (cdar) (car) (stack-ref 0) (stack-ref 2) (set-cdr) (nobble 1) (nobble 2))))
    ((name . list?) (pos . 5) (origin boot1 . list?) (inline (G0055 (listp))))
    ((name . caadr) (pos . 23) (origin list . caadr) (inline (G003672 (cadr) (car))) (setter (G003755 (stack-ref 1) (cadr) (stack-ref 0) (stack-ref 2) (set-car) (nobble 1) (nobble 2))))
    ((name . do2-list) (pos . 22) (origin list . do2-list))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 262)
    (cddddr . 261)
    (list-drop . 260)
    (cdaaar . 259)
    (caddar . 258)
    (cdar . 257)
    (cadaar . 256)
    (find1-list . 255)
    (cddar . 254)
    (all?2-list . 253)
    (cdddar . 252)
    (cddadr . 251)
    (caaaar . 250)
    (caaddr . 249)
    (do1-list-last-special . 248)
    (as-proper-list . 247)
    (map2-list . 246)
    (cadadr . 245)
    (cadddr . 244)
    (cddr . 243)
    (caadar . 242)
    (do2-list . 241)
    (caadr . 240)
    (accumulate1-list . 239)
    (proper-list? . 238)
    (accumulate-list . 237)
    (map1-list-last-special . 236)
    (cddaar . 235)
    (cadar . 234)
    (cadr . 233)
    (cdadr . 232)
    (caddr . 231)
    (cdaar . 230)
    (caaar . 229)
    (cdadar . 228)
    (caaadr . 227)
    (select-list . 226)
    (all?1-list . 225)
    (caar . 224)
    (slice-list . 223)
    (cdaadr . 222)
    (member-alist . 221)
    (cdddr . 220)
    (cdaddr . 219)
    (|(method binary/)| . 164)
    (|(method binary-)| . 163)
    (|(method binary+)| . 162)
    (|(method deep-copy)| . 161)
    (|(method shallow-copy)| . 160)
    ((converter <list>) . 159)
    ((converter <list>) . 158)
    (<list> . 157)
    (converter . 156)
    (|(method accumulate1)| . 155)
    (|(method accumulate)| . 154)
    (|(method slice)| . 153)
    (|(method concatenate)| . 152)
    (|(method remove)| . 151)
    (|(method sort)| . 150)
    (|(method reverse)| . 149)
    (|(method select)| . 148)
    (|(method all?)| . 147)
    (|(method any?)| . 146)
    (|(method find)| . 145)
    (|(method member)| . 144)
    (|(method size)| . 143)
    (|(method (setter element))| . 142)
    (|(method element)| . 141)
    (|(setter cddddr)| . 140)
    (|(setter cdddar)| . 139)
    (|(setter cddadr)| . 138)
    (|(setter cddaar)| . 137)
    (|(setter cdaddr)| . 136)
    (|(setter cdadar)| . 135)
    (|(setter cdaadr)| . 134)
    (|(setter cdaaar)| . 133)
    (|(setter cadddr)| . 132)
    (|(setter caddar)| . 131)
    (|(setter cadadr)| . 130)
    (|(setter cadaar)| . 129)
    (|(setter caaddr)| . 128)
    (|(setter caadar)| . 127)
    (|(setter caaadr)| . 126)
    (|(setter caaaar)| . 125)
    (|(setter cdddr)| . 124)
    (|(setter caaar)| . 123)
    (|(setter cadar)| . 122)
    (|(setter cdaar)| . 121)
    (|(setter caadr)| . 120)
    (|(setter cddar)| . 119)
    (|(setter cdadr)| . 118)
    (|(setter caddr)| . 117)
    (|(setter cddr)| . 116)
    (|(setter cdar)| . 115)
    (|(setter cadr)| . 114)
    (|(setter caar)| . 113)
    (|(method map)| . 112)
    (|(method do)| . 111)
    (|(method binary=)| . 110)
    (anonymous . 47)
   )
   literals (
   )
))
