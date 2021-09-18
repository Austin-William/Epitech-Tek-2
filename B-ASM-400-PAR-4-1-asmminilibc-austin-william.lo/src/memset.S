bits 64

section .data

section .text
	global memset

memset:
    mov     r8,     rdi		; Initialize adress.
    mov     rax,    rsi		; The value to store is rsi.
    mov     rcx,    rdx		; Storing byte per byte.
    rep     stosb
    mov     rax,    r8		; Return the adress;
    ret