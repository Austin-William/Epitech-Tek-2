bits 64

section .data

section .text
	global memmove

memmove:
    mov     rax,    rdi			; Initialize adress
    cmp     rdi,    rsi			; If dest < src -> incrementation of the pointer.
    je      match				; If dest == src, return.
    jb      move_byte
    mov     rcx,    rsi			; If dest > src and there are no overlapping regions (dest >= src+num) 
    add     rcx,    rdx			; Fast incrementation of the pointer.
    cmp     rdi,    rcx			; If dest > src and dest < src+num, we have to do a right-to-left move to preserve overlapping data.
    jae     move_byte

move_byte:
    mov     rcx,    rdx			; Move byte per byte.
    rep     movsb				; Repeat the operation.

match:
	ret