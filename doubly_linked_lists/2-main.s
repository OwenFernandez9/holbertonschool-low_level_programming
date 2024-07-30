	.file	"2-main.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -16(%rbp)
	leaq	-16(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$98, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$402, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	leaq	-16(%rbp), %rax
	movl	$1024, %esi
	movq	%rax, %rdi
	call	add_dnodeint@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	print_dlistint@PLT
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
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
