section .data
    output_format db "%d ", 0
    newline db 0xA

section .bss
    k resb 1   

section .text
    global _start

_start:
    ; Nh?p giá tr? k t? bàn phím
    mov eax, 3       
    mov ebx, 0       
    mov ecx, k      
    mov edx, 1      
    int 0x80       

    sub byte [k], '0'
    movzx eax, byte [k]

    mov ecx, 1      
print_loop:
    cmp ecx, 101     
    jg  end_program  

  
    mov edx, 0       
    div eax          
    cmp edx, 0  
    je next_iteration

    mov eax, 4      
    mov ebx, 1      
    mov ecx, output_format
    mov edx, 3       
    int 0x80    

    mov eax, 4     
    mov ebx, 1   
    mov ecx, newline
    mov edx, 1
    int 0x80          

next_iteration:
    inc ecx         
    jmp print_loop  

end_program:
    mov eax, 1       
    xor ebx, ebx  
    int 0x80       
