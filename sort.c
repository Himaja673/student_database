#include"student.h"
void SORT(ST *head){
	ST *ptr,*p;
	int i,j;
loop:
	printf("Enter your choice:\n");
	printf("1.Name wise\n2.Percentage wise\n");
	scanf("%d",&i);
	if(i<1||i>2){
		printf("Inavlid Option\n");
		goto loop;
	}
	switch(i){
		case 1:
			while(head){
				p=head;
				ptr=head;
back:
				while(ptr){
					if(strcmp(p->name,ptr->name)>0){
						int r=p->roll;
						p->roll=ptr->roll;
						ptr->roll=r;

						float f=p->per;
						p->per=ptr->per;
						ptr->per=f;

						char s[30];
						strcpy(s,p->name);
						strcpy(p->name,ptr->name);
						strcpy(ptr->name,s);
						goto back;
					}
					ptr=ptr->next;
				}
				head=head->next;
			}
			break;
		case 2:
			while(head){
				p=head;
				ptr=head;
back2:
				while(ptr){
					if(p->per<ptr->per){
						int r=p->roll;
						p->roll=ptr->roll;
						ptr->roll=r;

						float f=p->per;
						p->per=ptr->per;
						ptr->per=f;

						char s[30];
						strcpy(s,p->name);
						strcpy(p->name,ptr->name);
						strcpy(ptr->name,s);
						goto back2;
					}
					ptr=ptr->next;
				}
				head=head->next;
			}
			break;
	}
	printf(BLUE"data_shorted\n"STOP);
}

