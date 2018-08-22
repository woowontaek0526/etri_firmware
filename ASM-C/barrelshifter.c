#include <stdio.h>
int asm_lsl_ex (int x, int y);
asm("\n\
.global asm_lsl_ex \n\
		asm_lsl_ex: \n\
		add r0, r1, r1, lsl #1 \n\
		mov pc, lr \n\
   ");
int main()
{
	int lsl;
	printf("\n+-----------------+\n");
	printf("|ARMInstruction LSL|\n");
	printf("+-----------------+\n\n");

	lsl=asm_lsl_ex(0,5);
	printf("lsl = %08X\n\n",lsl);
	printf("lsls=%d\n\n",lsl);
	return 0;
}
