#include"student.h"
void ADD(ST **head){
	ST *new=malloc(sizeof(ST)),*ptr,*p;
	printf("Enter a student name:\n");
	scanf("%s",new->name);
	printf("Enter student percentage:\n");
	scanf("%f",&new->per);
	int n;
	if(del){
		printf(RED"It replace delete roll number\n"STOP);
		n=new->roll=pre;
		del=0;
	}else{
		n=++rollnumber;
		new->roll=rollnumber;
	}
	new->next=0;
	if(n==1){
		new->next=*head;
		*head=new;
	}else{
		ptr=*head;
		n--;
		while(n){
			p=ptr;
			ptr=ptr->next;
			n--;
		}
		p->next=new;
		new->next=ptr;
	}
}

