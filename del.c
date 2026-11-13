#include"student.h"
void DEL(ST **head){
	ST *ptr_1,*ptr_2;
	ptr_1=*head;
	int n,s1=0,ro;
	char s[30];
loop:
	printf(RED"Enter your option\n");
	printf("1.Name\n2.Roll\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Enter a name\n");
			scanf("%s",s);
			s1=1;
			break;
		case 2:
			printf("Enter roll number:\n");
			scanf("%d",&ro);
			s1=2;
			break;
		default:
			printf("Invalid option\n"STOP);
			goto loop;
	}
	if(s1==2){
loop2:
		ptr_1=*head;
		while(ptr_1){
			if(ptr_1->roll==ro){
				if(ptr_1==*head){
					pre=ptr_1->roll;
					del=1;
					*head=ptr_1->next;
					free(ptr_1);
				}else{
					ptr_2=*head;
					ST *ptr_3;
					ptr_3=ptr_2;
					while(ptr_2 != ptr_1 && ptr_2){
						ptr_3=ptr_2;
						ptr_2=ptr_2->next;
					}
					pre=ptr_2->roll;
					del=1;
					ptr_3->next=ptr_2->next;
					free(ptr_2);
				}
				return;
			}
			ptr_1=ptr_1->next;
		}
	}else if(s1==1){
		int count=0;
		ptr_1=*head;
		while(ptr_1){
			if(strcmp(ptr_1->name,s)==0){
				x=1;
				PRINT(ptr_1);
				x=0;
				count++;
			}
			ptr_1=ptr_1->next;
		}
		if(count==0){
			printf("no student avilable:\n");
			return;
		}
		if(count != 1){
			printf("Enter student roll number:\n");
			scanf("%d",&ro);
			goto loop2;
		}
		ptr_1=*head;
		while(ptr_1){
			if(strcmp(ptr_1->name,s)==0){
				if(ptr_1==*head){
					pre=ptr_1->roll;
					del=1;
					*head=ptr_1->next;
					free(ptr_1);
				}else{
					ptr_2=*head;
					ST *ptr_3;
					ptr_3=ptr_2;
					while(ptr_2 != ptr_1 && ptr_2){
						ptr_3=ptr_2;
						ptr_2=ptr_2->next;
					}
					pre=ptr_1->roll;
					del=1;
					ptr_3->next=ptr_2->next;
					free(ptr_2);
				}
				return;
			}
			ptr_1=ptr_1->next;

		}
	}
	printf("no roll avilable\n");

}                                                                 
