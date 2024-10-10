section .data
    input_format db "%d", 0
    output_format db "Tong: %d", 0

section .bss
    number resd 1

section .text
    global _start

_start:
    mov eax, 0
    mov ebx, 0

input_loop:
    mov eax, 3
    mov ebx, 0
    mov ecx, number
    mov edx, 4
    int 0x80

    mov eax, [number]
    cmp eax, 0
    je end_program

    add ebx, eax
    jmp input_loop

end_program:
    mov eax, 4
    mov ebx, 1
    mov ecx, output_format
    mov edx, 10
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80
