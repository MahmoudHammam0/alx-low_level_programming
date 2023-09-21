global main
extern printf

	section .text
main:
	push rbp
	mov rdi, fmt
	mov rsi, text
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
	section .data
text: db "Hello, Holberton", 0
fmt:	db "%s", 10, 0
