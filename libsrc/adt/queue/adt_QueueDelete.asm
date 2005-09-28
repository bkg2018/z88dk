; void adt_QueueDelete(struct adt_Queue *q, void *delete)
; 09.2005 aralbrec

XLIB adt_QueueDelete
LIB ADTQueueDelete

.adt_QueueDelete
   ld hl,2
   add hl,sp
   ld e,(hl)
   ld ixl,e
   inc hl
   ld a,(hl)
   ld ixh,a
   inc hl
   or e
   jr nz, deletenotzero
   ld ix,justret
.deletenotzero
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a
   jp ADTQueueDelete

.justret
   ret
