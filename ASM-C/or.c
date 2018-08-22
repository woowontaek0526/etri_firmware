#include <stdio.h>

int asm_orr_ex( int x, int y );

asm(" \n\
	.global asm_orr _ex \n\
	asm_orr_ex: \n\
	orr r0, r1 \n\
	mov pc, lr \n\
	");

int main( void )
{ 
	int orr; 
	printf("\n+-------------------+\n");
	printf("|ARMInstruction ORR|\n"); 
	printf("+-------------------+\n\n"); 
	orr = asm_orr_ex( 10, 2); 
	printf("orr = %d\n\n", orr ); 
	return 0;
}
