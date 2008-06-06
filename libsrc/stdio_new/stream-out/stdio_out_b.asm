; stdio_out_b
; 05.2008 aralbrec

XLIB stdio_out_b
LIB stdio_numprec, stdio_outcommon

INCLUDE "stdio.def"

; output %b parameter (non-standard binary representation)
;
; enter :    ix  = FILE *
;             a = precision
;             b = width
;             c = flags [-+ O#PLN]
;            de = integer
;            hl = & parameter list
;           bc' = total num chars output on stream thus far
; exit  :   bc' = total num chars output on stream thus far
;            hl = & parameter list
;         carry set if error on stream, ERRORNO set appropriately
; uses  : af, bc, de, hl, exx, bc'

.stdio_out_b

   push hl                     ; save & parameter

   push bc                     ; save width and flags
   ld bc,2                     ; num chars in buffer = 0, radix = 2

   ld hl,STDIO_TEMPBUFSIZE + 7
   add hl,sp                   ; hl = & last char in temporary buffer
   
   call stdio_numprec          ; write number to buffer including precision digits

   pop de
   
   ;     b = num chars written to buffer
   ;     d = width
   ;     e = flags [-+ O#PLN]
   ;    hl = & next free position in destination buffer

   inc b                       ; no digits written to buffer means precision and integer == 0
   djnz noadj
   ld e,0                      ; in this case clear flags so field remains blank

.noadj

   bit 3,e
   jr z, noindicator

.addbaseindicator

   ld (hl),'%'
   dec hl
   inc b

.noindicator

   call stdio_outcommon
   pop hl                      ; hl = & parameter list
   ret
