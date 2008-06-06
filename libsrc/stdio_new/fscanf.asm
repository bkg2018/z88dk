; int fscanf(FILE *stream, const char *fmt, ...)
; 05.2008 aralbrec

XLIB fscanf

LIB vfscanf_callee, stdio_varg, stdio_nextarg
XREF ASMDISP_VFSCANF_CALLEE

.fscanf

   call stdio_varg
   ld ixl,e
   ld ixh,d                    ; ix = FILE *
   
   call stdio_nextarg          ; de = char *fmt

   ld c,l
   ld b,h
   
   jp vfscanf_callee + ASMDISP_VFSCANF_CALLEE
