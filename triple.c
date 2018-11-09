.data
x: .word 3

.text
# code applies to integers that are greater than or equal to zero
main:
	la x5,x
	lw x12,0(x5)
	addi x10,x12,0  # x10 = 0 + 3
	j triple

	
	triple: add x10, x10, x10    # x10 = 3 + 3 =6
					add x10, x10,x12   #x10 = 6+3 = 9
					
	 # when given integer 3 it returns 3 x 3 = 9