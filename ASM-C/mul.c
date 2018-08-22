#include <stdio.h>

int asm_mul_ex(int x, int y);

asm(" \n\
.global asm_cmp_ex \n\
asm_cmp_ex: \n\
mul r0, r1 \n\
mov pc, lr \n\
");

int main()
{
}
