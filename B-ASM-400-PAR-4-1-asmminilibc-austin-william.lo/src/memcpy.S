bits 64

section .data

section .text
	global memcpy

memcpy:
	xor rcx, rcx

copy:
	cmp rdx, rcx
	jle decrem_rdi
 	mov r10b, byte [rsi + rcx]
 	mov [rdi], r10b
	inc rdi
	inc rcx
	jmp copy

decrem_rdi:
	cmp rcx, 0
	je end
	dec rdi
	dec rcx

end:
	mov rax, rdi
	ret
