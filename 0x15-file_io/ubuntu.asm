section .text
    global _start

_start:
    mov eax, 1      ; System call number (write)
    mov edi, 1      ; File descriptor (stdout)
    mov rsi, msg    ; Message address
    mov edx, msglen ; Message length
    syscall

    mov eax, 60     ; System call number (exit)
    xor edi, edi    ; Exit status
    syscall

section .data
    msg db "Hello, World!", 10
    msglen equ $ - msg
