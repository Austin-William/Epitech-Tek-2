bits 64

section .data

section .text
	global strlen

strlen:
  xor rcx, rcx

next:
  cmp [rdi], byte 0  	; check if null byte
  jz  if_null   		; if yes, end
  inc rcx            	; increment char
  inc rdi            	; move to next char
  jmp next   			; process again

if_null:
  mov rax, rcx       	; rcx = the size of str
  ret					; return 