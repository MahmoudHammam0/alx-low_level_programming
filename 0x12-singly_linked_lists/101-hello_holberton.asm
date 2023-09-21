global _start
extern printf

	section .text
_start:
	push rbp
	mov rdi, fmt
	mov rsi, text
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
text: db "Hello, Holberton", 0
fmt:	db "%s", 10, 0
