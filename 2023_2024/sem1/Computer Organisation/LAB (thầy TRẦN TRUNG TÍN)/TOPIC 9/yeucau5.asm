section .data
    mang_so_nguyen resd 10

section .text
    global _start

_start:
    mov eax, 0
    mov ebx, 0
    mov ecx, 0
    mov edx, 0
    int 0x80

    mov ecx, 10
    mov esi, mang_so_nguyen

generate_random_numbers:
    call random_number
    mov [esi], eax
    add esi, 4
    loop generate_random_numbers

    mov eax, 1
    xor ebx, ebx
    int 0x80
    
    

random_number:
    mov eax, 0
    mov ebx, 0
    mov ecx, 0
    mov edx, 0
    int 0x80
    mov eax, dword [edx]
    ret
