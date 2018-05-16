;
;	SN76489 (a.k.a. SN76494,SN76496,TMS9919,SN94624) sound routines
;	by Stefano Bodrato, 2018
;
;	int set_psg(int reg, int val);
;
;	Play a sound by PSG
;
;
;	$Id: set_psg.asm $
;

        SECTION code_clib
	PUBLIC	set_psg
	PUBLIC	_set_psg
	EXTERN		set_psg_callee

	EXTERN ASMDISP_SET_PSG_CALLEE
	

set_psg:
_set_psg:

	pop	bc
	pop	de
	pop	hl

	push	hl
	push	de
	push	bc
	
	jp set_psg_callee + ASMDISP_SET_PSG_CALLEE
