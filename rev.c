#include"student.h"
void REV(ST **head){
	if(*head==0){
		printf("head_empty\n");
		return;
	}
	ST *ptr,*p,*base=*head,*pre;
	int i,count=0;
	while(base){
		count++;
		base=base->next;
	}
	base=*head;
	for(i=0;i<count-1;i++){
		p=base;
		while(p->next != 0){
			ptr=p;
			p=p->next;
		}
		ptr->next=0;
		if(i==0){
			p->next=*head;
			*head=p;
			pre=*head;
		}else{
			p->next=base;
			pre->next=p;
			pre=pre->next;
		}
	}
	printf(RED"Data reversed successfully\n");
}

