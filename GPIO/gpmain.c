#include <stdio.h>
#include <sys/time.h>
#include "gp.h"

int main(void)
{
	unsigned int delay_cnt = 0;

	pinMode("29","out");
	digitalWrite("29","0");
	
	while(1){
		if((delay_cnt >= 1000) && (delay_cnt < 3000)){
			digitalWrite("29","1");	
			delay_cnt++;
			printf("HIGH %d\n",delay_cnt);
		}
		else if((delay_cnt < 1000)){
			digitalWrite("29","0");	
			delay_cnt++;
			printf("LOW %d\n",delay_cnt);
		}
		else{
			delay_cnt = 0;
			printf("reset %d\n",delay_cnt);
		}
	}		
}
