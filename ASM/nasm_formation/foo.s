section .data                                 ; Variables initialisées
        Buffer:           db 'Bonsoir', 10    ; En ascii, 10 = '\n'. La virgule sert à concaténer les chaines
        BufferSize:     equ $-Buffer          ; Taille de la chaine

section .text                                 ; Le code source est écrit dans cette section
        global _start                         ; Définition de l'entrée du programme

_start:                                       ; Entrée du programme

        mov eax, 4                            ; Appel de sys_write
        mov ebx, 1                            ; Sortie standard STDOUT
        mov ecx, Buffer                       ; Chaine à afficher
        mov edx, BufferSize                   ; Taille de la chaine
        int 80h                               ; Interruption du kernel

        mov eax, 1                            ; Appel de sys_exit
        mov ebx, 0                            ; Code de retour
        int 80h                               ; Interruption du kernel

; ceci est un programme assembleur permettant d'afficher "Bonsoir" a l'ecran en 32 bits

; en syntaxe Intel x86, écrit pour l'assembleur NASM ;
; utilisant le jeu d'instructions i386 ;
; à utiliser comme suit pour compiler :
;   nasm -f elf foo.s
;   ld -o foo foo.o -melf_i386
;   ./foo

; pour decompiler :
; objdump -d -M intel <exe> (par exemple a.out)