section .data
	format db 'Hello, Holberton', 0xA, 0

section .text
	global _start

	; Exit the program
	xor edi, edi       ; Clear EDI
	mov eax, 60        ; Exit syscall number
	syscall

section .bss
	resb 1             ; Reserve space for newline character

section .extern
	extern printf
