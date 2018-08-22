#include <stdio.h>

int asm_and_ex(int x, int y);

asm(" \n\
.global asm_and_ex \n\
asm_and_ex: \n\
and r0, r1 \n\
mov pc, lr \n\
");

int main(void)
{
	int and;
	printf("\n+-------------------+\n");
	printf("|ARMInstruction AND|\n");
	printf("+-------------------+\n\n");

	and = asm_and_ex(3, 2);
	printf("and = %d\n\n", and);
	return 0;
}