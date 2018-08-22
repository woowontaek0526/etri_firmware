int asm_eor_ex (int x, int y);

asm(" \n\
.global asm_eor_ex \n\
asm_eor_ex: \n\
eor r0, r1 \n\
mov pc, lr \n\
");

int main()
{
int eor;
printf("\n+---------------+\n");
printf("|ARMInstruction EOR|\n");
printf("+--------------+\n\n");

eor = asm_eor_ex(10, 2);
printf("eor = %d\n\n", eor);
return 0;
}
