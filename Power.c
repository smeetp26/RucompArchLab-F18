.data
x: .word 2
n: .word 10

.text
# code applies to integers that are greater than or equal to zero

main:
	la x5,x  
	la x6,n
	lw x12,0(x5)  
	lw x13,0(x6)    
	addi x28,x13,0
	addi x10,x12,0   # x10 = 2
	addi x14,x0,1
	j Power
	
Power:
	loop:
	beq x13,x0, exception   # if x13==x0 go to exception
	bge x14,x28,exit  # if x14 >= x28 go to exit
	mul x10,x10,x12     
	addi x28,x28,-1   
	jal x0,loop     
	exception:
	addi x10,x0,1
	exit:
	
	# After loop finishes value of 2^10 = 1024 is stored in a0 or x10
