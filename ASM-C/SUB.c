#include <stdio.h>

int asm_sub_ex ( int x, int y);

asm("\n\
.global asm_sub_ex \n\
asm_sub_ex:\n\
sub r0, r1 \n\
mov pc, lr \n\
");

int main (void)
{
int sub;
printf("\n+------------+\n");
printf("|ARMInstruction SUB|\n");
printf("+------------------+\n\n");

sub= asm_sub_ex(2,3);
printf("sub =%d\n\n", sub);
return 0;
}

