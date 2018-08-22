#include <stdio.h>

int asm_msr_ex(void);

asm("\n\
.global asm_msr_ex \n\
asm_msr_ex: \n\
mov r1, #1 \n\
mrs r0, cpsr \n\
orr r0, r0, r1, lsl #28 \n\
msr cpsr, r0 \n\
mrs r0, cpsr \n\
mov pc, lr \n\
");

int main(void)
{
int cpsr;

printf("\n+-------------+\n");
printf("|ARMInstruction MRS|\n");
printf("+---------------+\n\n");

cpsr = asm_msr_ex();
printf("cpsr= %08X\n\n",cpsr);
return 0;
}

