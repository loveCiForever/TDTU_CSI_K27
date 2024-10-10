.data
thirty: .ascii"This month has 30 days"
thirty1: .ascii"This month has 31 days"
es: .ascii"This month has 28 days or 29 days" 

.text
.globl main
main:

li $v0,5
syscall
move $t0,$v0

beq $t0, 

case1:
li $v0,4
la $a0, thirty
syscall
j exit

case2:
li $v0,4
la $a0, thirty1
syscall
j exit



exit:
li $v0,10
syscall