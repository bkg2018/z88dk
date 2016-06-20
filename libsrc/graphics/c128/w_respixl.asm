        INCLUDE "graphics/grafix.inc"

	SECTION	  code_clib
        PUBLIC    w_respixel

        EXTERN     l_cmp
        EXTERN     w_pixeladdress

        EXTERN    coords

;
;       $Id: w_respixl.asm,v 1.4 2016-06-20 21:47:41 dom Exp $
;

; ******************************************************************
;
; Reset pixel at (x,y) coordinate.
;
; Wide resolution (WORD based parameters) version by Stefano Bodrato
;
; Design & programming by Gunther Strube, Copyright (C) InterLogic 1995
;
; The (0,0) origin is placed at the top left corner.
;
; in:  hl,de    = (x,y) coordinate of pixel
;
; registers changed after return:
;  ......../ixiy same
;  afbcdehl/.... different
;
.w_respixel
        push    hl
        ld      hl,maxy
        call    l_cmp
        pop     hl
        ret     nc               ; Return if Y overflows

        push    de
        ld      de,maxx
        call    l_cmp
        pop     de
        ret     c                ; Return if X overflows
        
        ld      (coords),hl      ; store X
        ld      (coords+2),de    ; store Y: COORDS must be 2 bytes wider

	call	w_pixeladdress

	ld	b,a
	ld	a,1
	jr	z, res_pixel		; pixel is at bit 0...
.plot_position
	rlca
	djnz	plot_position
.res_pixel

	ex	af,af
	ld	d,18
        ld      bc,0d600h
        out     (c),d
loop1:
        in      a,(c)
        rla
        jp      nc,loop1
        inc	c
        out     (c),h

        dec	c
        inc	d
        out     (c),d
loop2:
        in      a,(c)
        rla
        jp      nc,loop2
        inc	c
        out     (c),l

        dec	c
        ld	a,31
        out     (c),a
loop3:
        in      a,(c)
        rla
        jp      nc,loop3
        inc	c

	ex	af,af
        in	e,(c)
        cpl
        and	e	; set pixel in current byte
        ex	af,af
        
        dec	c
        dec	d
        out     (c),d
loop4:
        in      a,(c)
        rla
        jp      nc,loop4
        inc	c
        out     (c),h

        dec	c
        inc	d
        out     (c),d
loop5:
        in      a,(c)
        rla
        jp      nc,loop5
        inc	c
        out     (c),l

        dec	c
        ld	a,31
        out     (c),a
loop6:
        in      a,(c)
        rla
        jp      nc,loop6
        inc	c
        ex	af,af
        out	(c),a
        
	ret
