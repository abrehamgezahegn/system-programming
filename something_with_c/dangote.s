	.file	"fork.c"
	.text
	.section	.rodata
.LC0:
	.string	"child is killed baba"
	.text
	.globl	handleChild
	.type	handleChild, @function
handleChild:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	handleChild, .-handleChild
	.section	.rodata
.LC1:
	.string	"child is running"
.LC2:
	.string	"Parent running "
.LC3:
	.string	"Error"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	handleChild(%rip), %rsi
	movl	$17, %edi
	call	signal@PLT
	call	fork@PLT
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L3
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L4:
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, %edi
	call	sleep@PLT
	jmp	.L4
.L3:
	cmpl	$0, -4(%rbp)
	je	.L5
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	-4(%rbp), %eax
	movl	$9, %esi
	movl	%eax, %edi
	call	kill@PLT
	jmp	.L6
.L5:
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L6:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
