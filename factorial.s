c.data
n: .word 5

.text
main:
	la t0, n
	lw a0, 0(t0)
	jal ra, factorial
	
	addi a1, a0, 0
	addi a0, x0, 1
	ecall # Print Result
	
	addi a0, x0, 10
	ecall # Exit
	
	factorial:
la t1, n
lw t1, 0(t1)
addi t3, t3, 1
blt t1, t3, zero_f
start:
addi t1, t1, -1
blt t1, t3, end
mul a0, a0, t1
j start
end:
jr ra
zero_f:
addi, a0, a0, 1
j end