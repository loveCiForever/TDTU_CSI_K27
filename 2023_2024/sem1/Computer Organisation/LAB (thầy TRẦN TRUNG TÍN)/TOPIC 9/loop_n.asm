.data
	space:	.asciiz " "
.text
	li $t0, 1
loop:
	blt $t0, $t5, exit
	move $a0, $t0
	li $v0, 1
	syscall
	
	li $v0, 4
	la $a0, space
	syscall
	
	addi $t0, $t0, 1
	j loop
exit: