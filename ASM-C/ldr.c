#include <stdio.h>

int asm_ldr_ex(void);

int mem32;

asm(" \n\
.global asm_ldr_ex \n\
asm_ldr_ex: \n\
ldr r1, =mem32 \n\
ldr r0, [r1] \n\
str r0, [r1] \n\
");

int main(void)
{
int ldr;

printf("\n +----------------+\n");
printf("|ARM Instruction LDR|\n");
printf("+-----------------+\n\n");

mem32 = 3;

ldr = asm_ldr_ex();

printf("mem32 value = %d\n", ldr);

printf("Program END\n\n");

return 0;
}
