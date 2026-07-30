	.file	"7_vol_of_sphere.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter the Radius: "
.LC1:
	.string	"%f"
.LC2:
	.string	"%f\n"
.LC6:
	.string	"Volume of the the Sphere: %f\n"
	.align 8
.LC7:
	.string	"Volume2 of the the Sphere: %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movss	-20(%rbp), %xmm0
	pxor	%xmm2, %xmm2
	cvtss2sd	%xmm0, %xmm2
	movq	%xmm2, %rax
	leaq	.LC2(%rip), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	-20(%rbp), %xmm1
	movss	.LC3(%rip), %xmm0
	mulss	%xmm0, %xmm1
	movss	-20(%rbp), %xmm0
	mulss	%xmm0, %xmm1
	movss	-20(%rbp), %xmm0
	mulss	%xmm0, %xmm1
	movss	.LC4(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-20(%rbp), %xmm1
	movss	.LC5(%rip), %xmm0
	mulss	%xmm0, %xmm1
	movss	-20(%rbp), %xmm0
	mulss	%xmm0, %xmm1
	movss	-20(%rbp), %xmm0
	mulss	%xmm0, %xmm1
	movss	.LC4(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	pxor	%xmm3, %xmm3
	cvtss2sd	-16(%rbp), %xmm3
	movq	%xmm3, %rax
	leaq	.LC6(%rip), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	movl	$1, %eax
	call	printf@PLT
	pxor	%xmm4, %xmm4
	cvtss2sd	-12(%rbp), %xmm4
	movq	%xmm4, %rax
	leaq	.LC7(%rip), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC3:
	.long	1078535314
	.align 4
.LC4:
	.long	1068149419
	.align 4
.LC5:
	.long	1078523331
	.ident	"GCC: (GNU) 16.1.1 20260728"
	.section	.note.GNU-stack,"",@progbits
