#include"student.h"
void SAVE(ST *head){
	if(head==0){
		printf(RED"no data"STOP);
		return;
	}
	FILE *df=fopen("student.txt","w");
	while(head){
		fprintf(df,"%d %s %.2f\n",head->roll,head->name,head->per);
		head=head->next;
	}
	fclose(df);
	printf(GREEN"printed on"RED"data"STOP"file\n"STOP);
}

