.data
msg: .asciiz "This is a zero"

.text
.globl main
main:

li $v0,5
syscall
move $t0,$v0

bne $t0, $zero, exit

li $v0,4
la $a0, msg
syscall

exit:
li $v0,10
syscall