#include"student.h"
void DEL_ALL(ST **head){
	ST *p;
	while(*head){
		p=(*head)->next;
		free(*head);
		*head=p;
	}
	printf(RED"all data is clear\n"STOP);
	printf(BLUE"Do you want repeat roll number from 1\n"STOP);
	int n;
	scanf("%d",&n);
	if(n==1){
		rollnumber=0;
	}
}

