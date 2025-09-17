	.file	"app.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$10, (%esp)
	call	_accumulate
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
LC0:
	.ascii "total = %d\12\0"
	.text
	.globl	_accumulate
	.def	_accumulate;	.scl	2;	.type	32;	.endef
_accumulate:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	$0, -12(%ebp)
	movl	$1, -16(%ebp)
	movl	$2, -20(%ebp)
	movl	$3, -24(%ebp)
	movl	$4, -28(%ebp)
	movl	$5, -32(%ebp)
	movl	8(%ebp), %edx
	movl	-16(%ebp), %eax
	addl	%eax, %edx
	movl	-20(%ebp), %eax
	addl	%eax, %edx
	movl	-24(%ebp), %eax
	addl	%eax, %edx
	movl	-28(%ebp), %eax
	addl	%eax, %edx
	movl	-32(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
