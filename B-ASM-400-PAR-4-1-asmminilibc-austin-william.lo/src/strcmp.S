bits 64

section .data

section .text
	global strcmp

strcmp:
	xor rax, rax		; return (0)
	xor rbx, rbx		; initialize the first argument
	xor rcx, rcx		; initialize the second argument
	xor rdx, rdx		
	xor al, al			; initialize the result
	xor bl, bl			; initialize the first char of first argument
	xor cl, cl			; initialize the first char of second argument
	jmp recurs

recurs:
	mov bl, byte[rdi]	; store the first char of first argument in bl
	mov cl, byte[rsi]	; store the first char of second argument in bl
	cmp bl, 10			; if first char of first argument == '\0'
	jz exit				; return
	cmp cl, 10			; if first char of second argument == '\0'
	jz exit				; return
	cmp bl, cl			; if first char of first argument != first char of second argument
	jz end_strcmp		; end of strcmp
	inc rdi				; get next char
	inc rsi				; get next char
	jmp recurs			; do it again until '\0'

exit:
	ret

end_strcmp:
	mov al, bl			; al = bl
	sub al, cl			; substract al by cl (char by char)
	movsx rax, al		; al = rax
	ret