;;; EuLisp system 'youtoo'
;;;   Interface file for module boot

(definterface boot
  (import (boot1)
   syntax (_boot0)
   full-import (boot1)
   export (
    ((name . stdout) (pos . 52) (origin boot1 . stdout) (class . constant) (value 1))
    ((name . print) (pos . 3) (origin boot1 . print))
    ((name . equal) (pos . 50) (origin boot1 . equal))
    ((name . *backtrace-nframes*) (pos . 34) (origin boot . *backtrace-nframes*))
    ((name . list-remove-duplicates) (pos . 15) (origin boot . list-remove-duplicates))
    ((name . simple-generic-function?) (pos . 49) (origin boot1 . simple-generic-function?) (inline (G0053 (gfp))))
    ((name . write-object) (pos) (origin boot1 . write-object) (class . opencoding) (arity . 2) (opencoding (write-object)))
    ((name . member1-list) (pos . 33) (origin boot . member1-list) (inline (G00141 (static-ref-nil) (memq))))
    ((name . format) (pos . 48) (origin boot1 . format))
    ((name . init-list-ref) (pos . 32) (origin boot . init-list-ref))
    ((name . *absent*) (pos . 47) (origin boot1 . *absent*) (class . constant))
    ((name . dec) (pos . 46) (origin boot1 . dec) (inline (G0078 (fpi-dec))))
    ((name . anyp1-list) (pos . 31) (origin boot . anyp1-list))
    ((name . cons?) (pos . 44) (origin boot1 . cons?) (inline (G0047 (consp))))
    ((name . <) (pos . 43) (origin boot1 . <) (inline (G0072 (fpi-lt))))
    ((name . eql) (pos . 45) (origin boot1 . eql) (inline (G0037 (eql))))
    ((name . listify-env-string) (pos . 29) (origin boot . listify-env-string))
    ((name . setter) (pos . 42) (origin boot1 . setter))
    ((name . mod) (pos . 41) (origin boot1 . mod) (inline (G0070 (fpi-remainder))))
    ((name . make-vector) (pos . 40) (origin boot1 . make-vector))
    ((name . object?) (pos . 39) (origin boot1 . object?))
    ((name . prin) (pos . 38) (origin boot1 . prin))
    ((name . atom?) (pos . 37) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . reverse-list) (pos . 28) (origin boot . reverse-list))
    ((name . error) (pos . 13) (origin boot . error))
    ((name . *error*) (pos . 14) (origin boot . *error*))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . make-vector1) (pos . 58) (origin boot1 . make-vector1) (class . ff) (arity . 2) (ff (0 8) 6 ("eul_make_vector" . "ff_stub_eul_make_vector246")))
    ((name . list-ref) (pos . 26) (origin boot . list-ref))
    ((name . member-list) (pos . 27) (origin boot . member-list))
    ((name . warning) (pos . 25) (origin boot . warning))
    ((name . anyp2-list) (pos . 12) (origin boot . anyp2-list))
    ((name . *) (pos . 35) (origin boot1 . *) (inline (G0064 (fpi-product))))
    ((name . character?) (pos . 34) (origin boot1 . character?) (inline (G0041 (characterp))))
    ((name . append!) (pos . 23) (origin boot . append!))
    ((name . %) (pos . 33) (origin boot1 . %) (inline (G0068 (fpi-remainder))))
    ((name . assoc-list-ref) (pos . 22) (origin boot . assoc-list-ref) (inline (G00143 (stack-ref 0) (stack-ref 2) (static-ref-nil) (assq) (nobble 2))))
    ((name . map1-list) (pos . 11) (origin boot . map1-list))
    ((name . stderr) (pos . 32) (origin boot1 . stderr) (class . constant) (value 2))
    ((name . *stack-nvalues*) (pos . 10) (origin boot . *stack-nvalues*))
    ((name . member1-string) (pos . 55) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 ("eul_str_member1" . "ff_stub_eul_str_member1243")))
    ((name . make-symbol) (pos . 56) (origin boot1 . make-symbol) (class . ff) (arity . 1) (ff (3) 6 ("eul_make_symbol" . "ff_stub_eul_make_symbol244")))
    ((name . int-as-character) (pos) (origin boot1 . int-as-character) (class . opencoding) (arity . 1) (opencoding (fpi-as-character)))
    ((name . int-zero?) (pos . 31) (origin boot1 . int-zero?) (inline (G0080 (fpi-zerop))))
    ((name . int?) (pos . 30) (origin boot1 . int?) (inline (G0049 (fpip))))
    ((name . tailstring) (pos . 54) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 ("eul_tailstr" . "ff_stub_eul_tailstr242")))
    ((name . backtrace) (pos . 9) (origin boot . backtrace))
    ((name . car) (pos . 29) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . *argc*) (pos . 28) (origin boot1 . *argc*) (class . constant))
    ((name . sprint) (pos . 27) (origin boot1 . sprint))
    ((name . *argv*) (pos . 26) (origin boot1 . *argv*) (class . constant))
    ((name . list) (pos . 25) (origin boot1 . list))
    ((name . character-as-int) (pos) (origin boot1 . character-as-int) (class . opencoding) (arity . 1) (opencoding (character-as-fpi)))
    ((name . sprin) (pos . 24) (origin boot1 . sprin))
    ((name . symbol?) (pos . 23) (origin boot1 . symbol?) (inline (G0045 (symbolp))))
    ((name . inc) (pos . 21) (origin boot1 . inc) (inline (G0076 (fpi-inc))))
    ((name . eq) (pos . 22) (origin boot1 . eq) (inline (G0035 (eq))))
    ((name . exit) (pos . 20) (origin boot1 . exit))
    ((name . getenv) (pos . 19) (origin boot1 . getenv))
    ((name . append) (pos . 8) (origin boot . append))
    ((name . mapcan) (pos . 7) (origin boot . mapcan))
    ((name . apply) (pos . 5) (origin boot . apply))
    ((name . string-size) (pos . 18) (origin boot1 . string-size) (inline (G0088 (primitive-size))))
    ((name . string?) (pos . 17) (origin boot1 . string?) (inline (G0043 (stringp))))
    ((name . substring) (pos . 53) (origin boot1 . substring) (class . ff) (arity . 3) (ff (3 0 0) 3 ("eul_substr" . "ff_stub_eul_substr241")))
    ((name . list-size) (pos . 19) (origin boot . list-size))
    ((name . -) (pos . 16) (origin boot1 . -) (inline (G0062 (fpi-difference))))
    ((name . +) (pos . 15) (origin boot1 . +) (inline (G0060 (fpi-sum))))
    ((name . make-keyword) (pos . 57) (origin boot1 . make-keyword) (class . ff) (arity . 1) (ff (3) 6 ("eul_make_keyword" . "ff_stub_eul_make_keyword245")))
    ((name . stack-values) (pos . 4) (origin boot . stack-values))
    ((name . *warning*) (pos . 3) (origin boot . *warning*))
    ((name . else) (pos . 14) (origin boot1 . else) (class . constant))
    ((name . cpu-time) (pos . 13) (origin boot1 . cpu-time))
    ((name . list-remove) (pos . 18) (origin boot . list-remove))
    ((name . /) (pos . 12) (origin boot1 . /) (inline (G0066 (fpi-quotient))))
    ((name . =) (pos . 11) (origin boot1 . =) (inline (G0074 (fpi-equal))))
    ((name . null?) (pos . 10) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . string-ref) (pos . 9) (origin boot1 . string-ref) (inline (G0090 (string-ref))) (setter (G00100 (set-string-ref))))
    ((name . vector-size) (pos . 8) (origin boot1 . vector-size) (inline (G0092 (primitive-size))))
    ((name . vector-ref) (pos . 7) (origin boot1 . vector-ref) (inline (G0094 (primitive-ref))) (setter (G00102 (set-primitive-ref))))
    ((name . getchar) (pos . 35) (origin boot . getchar) (class . ff) (arity . 0) (ff () 1 ("getchar" . "ff_stub_getchar419")))
    ((name . do1-list) (pos . 17) (origin boot . do1-list))
    ((name . sort-list) (pos . 16) (origin boot . sort-list))
    ((name . list?) (pos . 5) (origin boot1 . list?) (inline (G0055 (listp))))
    ((name . system) (pos . 51) (origin boot1 . system))
    ((name . simple-function?) (pos . 4) (origin boot1 . simple-function?) (inline (G0051 (lambdap))))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 119)
    (show-frames . 118)
    (stack-values . 117)
    (apply . 116)
    (mapcan . 115)
    (append . 114)
    (backtrace . 113)
    (map1-list . 112)
    (anyp2-list . 111)
    (error . 110)
    (list-remove-duplicates . 109)
    (sort-list . 108)
    (do1-list . 107)
    (list-remove . 106)
    (list-size . 105)
    (show-stack-values . 104)
    (assoc-list-ref . 103)
    (append! . 102)
    (warning . 101)
    (list-ref . 100)
    (member-list . 99)
    (reverse-list . 98)
    (listify-env-string . 97)
    (list-remove1 . 96)
    (anyp1-list . 95)
    (init-list-ref . 94)
    (member1-list . 93)
    ("
" . 78)
    ("*** WARNING [level1]: " . 77)
    ("       ~a: ~a
" . 72)
    ("***    See Backtrace? (y/n) " . 58)
    ("
" . 57)
    ("*** ERROR [level1]: " . 56)
    ("*** BACKTRACE:" . 50)
    ("*** STACK VALUES:" . 43)
    ("       ~a: ~a
" . 41)
    (|(setter list-ref)| . 39)
    (anonymous . 37)
   )
   literals (
   )
))
