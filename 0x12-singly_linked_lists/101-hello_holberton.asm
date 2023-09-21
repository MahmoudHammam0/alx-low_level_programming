section .data
	text: db "Hello, Holberton",10,0
	format: db "%s",0

section .text
	global _start
	extern printf

_start:
	push rbp
	mov rbp, rsp

	mov rsi, text
	mov rdi, format
	call printf

	pop rbp
	mov rax, 0
	ret
