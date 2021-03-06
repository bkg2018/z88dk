
    SECTION code_driver
    SECTION code_driver_character_input

    PUBLIC asm_asci1_flush_Rx_di
    PUBLIC asm_asci1_flush_Rx

    EXTERN asm_z180_push_di, asm_z180_pop_ei
    EXTERN asci1RxCount, asci1RxIn, asci1RxOut, asci1RxBuffer

    asm_asci1_flush_Rx_di:

        push af
        push hl

        call asm_z180_push_di       ; di

        call asm_asci1_flush_Rx

        call asm_z180_pop_ei        ; ei

        pop hl
        pop af

        ret

    asm_asci1_flush_Rx:

        xor a
        ld (asci1RxCount), a        ; reset the Rx counter (set 0)  		

        ld hl, asci1RxBuffer        ; load Rx buffer pointer home
        ld (asci1RxIn), hl
        ld (asci1RxOut), hl

        ret

    EXTERN asm_asci1_need
    defc NEED = asm_asci1_need
    
