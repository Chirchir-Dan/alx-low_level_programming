section .data
	hello db "Hello, Holberton", 0   ; Null-terminated string
	format db "%s", 10, 0           ; Format string for printf

section .text
	global _start

_start:
	; Call printf
	mov rdi, format
	mov rsi, hello
	xor rax, rax    ; Clear RAX to indicate no vector registers are used
	call printf

	; Exit the program
	mov rax, 60     ; syscall number for exit
	xor rdi, rdi    ; status = 0
	syscall

section .bss
	section .bss
l_hello resb 64

