
SECTION seg_code_error
   
PUBLIC errno_zc
   
EXTERN error_zc, _errno

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_ERROR = 0

   pop hl
   pop hl
   pop hl

   ld l,$ff                    ; unspecified error

ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

errno_zc:
 
   ; set errno = l
   ; set hl = 0
   ; set carry flag
      
   ld h,0
   ld (_errno),hl
      
   jp error_zc
