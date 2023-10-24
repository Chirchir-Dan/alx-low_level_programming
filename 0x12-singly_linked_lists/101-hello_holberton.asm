global _start
	extern printf

_start:
	mov rdi, hello_format
	xor rax, rax
	call printf
	mov rax, 0
	ret

hello_format: db "Hello, Holberton", 10, 0

