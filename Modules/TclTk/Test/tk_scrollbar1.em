;;;-----------------------------------------------------------------------------
;;;  By J Garcia & University of Bath. All rights reserved
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo/tk'
;;;-----------------------------------------------------------------------------
;;;  Library: tcltk
;;;  Authors: J Garcia
;;; Description: YouToo/Tk module to test the scrollbar & listbox widgets.
;;;-----------------------------------------------------------------------------
(defmodule tk_scrollbar1
  (syntax (macros)
   import (level1 tcltk)
   export (test-scrollbar))

;;;-----------------------------------------------------------------------------
;;; Callback Functions
;;;-----------------------------------------------------------------------------
(defun take-value ()
  (let (result)
    (setq result (tk-selection-get "LINE"))
    (format t "result: ~a" result)))

;;;-----------------------------------------------------------------------------
;;; Test Function
;;;-----------------------------------------------------------------------------
(defun test-scrollbar ()
  (tk-wm "title" () "Test Scrollbar")
  (let ((i 0)
        (frame-left (tk-make-frame () width: "3c" height: "4c"))
        (frame-right (tk-make-frame () width: "6c" height: "4c"))
        (numbers-lb (tk-make-listbox ()))
        (text (tk-make-text () relief: "sunken" bd: "2"))
        (scroll-1 (tk-make-scrollbar ()))
        (scroll-2 (tk-make-scrollbar ()))
        (exit-but (tk-make-button () text: "Exit" command: tk-exit))
        str)

    (eul-associate text scroll-2 'vertical)
    (eul-associate numbers-lb scroll-1 'vertical)

    (while (< i (* 14 4))
      (setq str (convert i <string>))
      (tk-insert numbers-lb "end" str)
      (setq i (+ i 2)))


    (tk-bind numbers-lb "<Button-1>" take-value)
    (tk-insert text "end" (fmt "Line 1.\n2\n3\n4\n5\n...\n"))


    (tk-pack frame-left side: "left")
    (tk-pack frame-right side: "right")
    (tk-pack numbers-lb in: frame-left side: "left")
    (tk-pack scroll-1 in: frame-left side: "right" fill: "y")
    (tk-pack text in: frame-right side: "left")
    (tk-pack scroll-2 in: frame-right side: "right" fill: "y")
    (tk-pack exit-but side: "bottom" pady: "5")
    )

  (Tk_MainLoop))

(test-scrollbar)

;;;-----------------------------------------------------------------------------
)  ;; End of module
;;;-----------------------------------------------------------------------------
