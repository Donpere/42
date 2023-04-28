bits 32
extern printf
global main

section .data
Hello db "Hello world!", 10, 0


section .text

main:
    push ebp
    mov ebp, esp
    sub esp, 4
    mov dword [esp], Hello
    call printf
    xor eax, eax
    leave
    ret