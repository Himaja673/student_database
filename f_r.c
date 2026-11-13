#include"student.h"
void READ_FILE(ST **head){
	FILE *fp=fopen("student.txt","r");
	while(1){
		rollnumber++;
		if(fp==0){
			printf(RED"file not avilable\n"STOP);
			return;
		}
		ST *new=malloc(sizeof(ST));
		if(fscanf(fp,"%s%f",new->name,&new->per)==-1){
			printf(RED"transfer compleated\n"STOP);
			rollnumber--;
			rewind(fp);
			return;
		}
		new->roll=rollnumber;
		if(*head==0){
			*head=new;
			new->next=0;
		}else{
			ST *ptr=*head;
			while(ptr->next != 0){
				ptr=ptr->next;
			}
			ptr->next=new;
			new->next=0;
		}
	}
}                                
