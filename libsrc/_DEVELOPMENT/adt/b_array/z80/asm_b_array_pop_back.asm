
; ===============================================================
; Mar 2014
; ===============================================================
; 
; int b_array_pop_back(b_array_t *a)
;
; Pop char from end of array.
;
; ===============================================================

XLIB asm_b_array_pop_back
XDEF asm_b_vector_pop_back

LIB __array_info, error_einval_mc

asm_b_array_pop_back:
asm_b_vector_pop_back:

   ; enter : hl = array *
   ;
   ; exit  : success
   ;
   ;            hl = last char, popped
   ;            carry reset
   ;
   ;         fail if array is empty
   ;
   ;            hl = -1
   ;            carry set, errno = EINVAL
   ;
   ; uses  : af, bc, de, hl

   call __array_info
   jp z, error_einval_mc       ; if array is empty

   ; bc = array.size
   ; hl = & array.size + 1b
   ; de = array.data

   dec bc                      ; size--
   
   ld (hl),b
   dec hl
   ld (hl),c                   ; array.size = size - 1
   
   ex de,hl                    ; hl = array.data
   add hl,bc                   ; hl = & array.data[size - 1]
   
   ld l,(hl)
   ld h,0
   
   ret
