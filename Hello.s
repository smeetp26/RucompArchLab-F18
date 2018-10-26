#
# Print Hello World
#

main:
.text
la a1, hello
li a0, 4
ecall
.data
hello:
.asciiz "Hello World"
j main 