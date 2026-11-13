#include"student.h"
void PRINT( ST *head){
	if(head){
		printf(YELLOW"ROLL:%d  ",head->roll);
		printf("NAME:%s  ",head->name);
		printf("PERCENTAGE:%.2f  "STOP,head->per);
		printf("\n");
		if(x){
			return;
		}
		PRINT(head->next);
	}
}

