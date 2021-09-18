bits 64

section .data

section .text
	global strncmp

strncmp:
	xor rcx, rcx			; Initialize variables

next:
	mov r10b, byte [rdi + rcx]	; put str1[a] in rbx's first 8bits.
	mov r11b, byte [rsi + rcx]	; put str2[a] in rax's first 8bits.
	cmp r10b, 0					; if r10b == 0.
	je end						
	cmp r11b, 0					; if r11b == 0.
	je end
	cmp r10b, r11b				; if r10b == r11b.
	jne end
	inc rdi						; rdi++.
	inc rsi						; rsi++.
	inc rcx						; rci++.
	cmp rdx, rcx				; if rdx == rcx
	jle end
	jmp next					; do it again

end:
	movzx rax, r10b				; equivalent of xor rax, rax mov | byte, r10b.
	movzx rbx, r11b				; clean bits in rbx and put str2[a] in rbx's first 8 bits.
	sub rax, rbx
	ret