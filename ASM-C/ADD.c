#include <stdio.h>

int asm_sum_ex (int x, int y);

int main(void)
{
int sum;
printf("\n+----------------+\n");
printf("|ARMInstruction ADD\n");
printf("+----------------+\n");

sum = asm_sum_ex( 2, 3);
printf("sum =%d\n\n",sum);
return 0;
}

asm(
".global asm_sum_ex \n"
"asm_sum_ex:\n"
"add r0, r1 \n"
"mov pc, lr \n"
);

