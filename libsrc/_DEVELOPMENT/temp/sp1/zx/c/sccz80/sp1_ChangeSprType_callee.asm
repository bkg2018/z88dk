; void __CALLEE__ sp1_ChangeSprType_callee(struct sp1_cs *c, void *drawf)

SECTION seg_code_sp1

PUBLIC sp1_ChangeSprType_callee

sp1_ChangeSprType_callee:

   pop hl
   pop de
   ex (sp),hl

   INCLUDE "temp/sp1/zx/sprites/asm_sp1_ChangeSprType.asm"
