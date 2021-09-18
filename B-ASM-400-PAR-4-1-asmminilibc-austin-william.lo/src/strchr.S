bits 64

section .data

section .text
	global strchr

strchr:
	xor	rax, rax
next:	
	cmp	byte [rdi], sil
	je	found
	cmp	byte [rdi], 0x00
	je	return
	inc	rdi
	jmp	next

return:
	mov	eax, 0x00
	ret

found:
	mov	rax, rdi
	ret