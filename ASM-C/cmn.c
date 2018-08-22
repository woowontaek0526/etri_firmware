#include <stdio.h>

int asm_cmn_ex ( int x, int y );

void cmn_blt_ok ( void )
{
	printf("CMN BLT OK \n");
}
asm(" \n\
	.global asm_cmn_ex \n\
	asm_cmn_ex: \n\ cmn r0, r1 \n\
	blt cmn_blt_ok \n\
	mov pc, lr \n\
	");

int main ( void )
{ 
	int cmn; 
	printf("\n+-------------------+\n"); 
	printf("|ARMInstruction cmn|\n"); 
	printf("+-------------------+\n\n"); 
	cmn = asm_cmn_ex( -2, 3); 
	printf("cmn = %d\n\n", cmn ); 
	return 0;
}
