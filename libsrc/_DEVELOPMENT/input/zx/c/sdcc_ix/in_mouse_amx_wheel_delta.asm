
; int16_t in_mouse_amx_wheel_delta(void)

SECTION code_input

PUBLIC _in_mouse_amx_wheel_delta

EXTERN asm_in_mouse_amx_wheel_delta

defc _in_mouse_amx_wheel_delta = asm_in_mouse_amx_wheel_delta
