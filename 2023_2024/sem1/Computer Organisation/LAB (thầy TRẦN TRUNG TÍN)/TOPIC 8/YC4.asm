.data
msg1: .asciiz "This is a zero"
msg2: .asciiz"This is not a zero"

.text
.globl main
main:

li $v0,5
syscall
move $t0,$v0

beq $t0,$zero, True
False:
li $v0,4
la $a0, msg2
syscall
j exit

True:
li $v0,4
la $a0, msg1
syscall

exit:
li $v0,10
syscall
