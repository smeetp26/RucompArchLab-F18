	.file	"foo.c"
	.option nopic
	.text
	.align	1
	.globl	foo
	.type	foo, @function
foo:
	addw	a0,a0,a1
	ret
	.size	foo, .-foo
	.ident	"GCC: (GNU) 7.2.0"
