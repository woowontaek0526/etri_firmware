#include <stdio.h>

int asm_bl_ex();

void bl_test()
{
	printf("bl test called\n\n");
}

asm(" \n\
	.global asm_bl_ex \n\
	asm_bl_ex: \n\
	mov ip, sp \n\
	stmfd r13!, {r11, r12, r14, r15} \n\
	sub fp, ip, #4 \n\
	bl subroutine; \n\
	ldmfd r13, {r11, r13, r15} \n\
	");

asm(" \n\
	.global subroutine \n\
	subroutine: \n\
	b bl_test \n\
	mov pc, lr \n\
	");

int main()
{
	int b;

	printf("\n+-----------------+\n");
	printf("|ARM Instruction B|\n");
	printf("+-----------+\n\n");

	asm_bl_ex();

	printf("Program END\n\n");

	return 0;
}

