/* @LICENSE(MUSLC_MIT) */

.global remainderl
.type remainderl,@function
remainderl:
	fldt 16(%esp)
	fldt 4(%esp)
1:	fprem1
	fstsw %ax
	sahf
	jp 1b
	fstp %st(1)
	ret
