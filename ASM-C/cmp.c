#include <stdio.h>

int asm_cmp_ex(int x, int y);

void cmp_beq_ok(void)
{
		printf("CMP BEQ OK \n");
}

asm(" \n\
	.global asm_cmp_ex \n\
	asm_cmp_ex: \n\
	cmp r0, r1 \n\
	beq cmp_beq_ok\n\
	mov pc, lr \n\
	");

int main()
{
	int cmp;
	printf("\n+------------+\n");
	printf("|ARM instrcutcion CMP|\n");
	printf("+---------------+\n\n");

	cmp = asm_cmp_ex(2,3);
	return 0;
}

