
; void bv_priority_queue_clear_fastcall(bv_priority_queue_t *q)

SECTION code_clib
SECTION code_adt_bv_priority_queue

PUBLIC _bv_priority_queue_clear_fastcall

EXTERN asm_bv_priority_queue_clear

defc _bv_priority_queue_clear_fastcall = asm_bv_priority_queue_clear
