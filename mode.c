#include"student.h"
void MOD(ST *h){
	ST *p=h,*m;
	if(h==0){
		printf("data not avilable\n");
		return;
	}
scan:
	printf("Enter your option:\n");
	printf("1.Student roll\n2.Student Name\n3.Student per\n");
	int n,y;
	scanf("%d",&n);
	if(n<1 || n>3){
		printf("Invalid Option\n");
		goto scan;
	}
	int count=0,r;
	char s[30];
	float f;
	int rk=0;
	switch(n){
		case 1:
loop:
			h=p;
			rk++;
			//      int r;
			printf("Enter Student Roll\n");
			scanf("%d",&r);
			while((h->roll != r) && h){
				h=h->next;
				if(h==0){
					printf("student roll not avilable\n");
					return;
				}
			}
			break;
		case 2:
			//      char s[30];
			printf("Enter Student Name:\n");
			scanf("%s",s);
			while(h){
				if(strcmp(h->name,s)==0){
					count++;
					m=h;
					x=1;
					PRINT(h);
					x=0;
				}
				h=h->next;
			}
			if(count==0){
				printf("No student data avilable\n");
				return;
			}else if(count>1){
				goto loop;
			}
			break;
		case 3:
			//      float f;
			printf("Enter Student Per:\n");
			scanf("%f",&f);
			while(h){
				if(h->per==f){
					count++;
					m=h;
					x=1;
					PRINT(h);
					x=0;
				}
				h=h->next;
			}
			if(count==0){
				printf("No student data avilable\n");
				return;
			}else if(count>1){
				goto loop;
			}
			break;
	}
	if(rk==0){
		h=m;
	}
	if(0){
	}else{
		printf(RED"sected student\n"STOP);
		x=1;
		PRINT(h);
		x=0;
s:
		printf(RED"Enter your change choice:\n");
		printf("1.name change\n2.percentage chang\n3.change both\n"STOP);
		scanf("%d",&n);
		if(n<1 || n>3){
			printf("invalid_option\n");
			goto s;
		}
		switch(n){
			case 1:
				printf("Enter student modify name:\n");
				scanf("%s",h->name);
				break;
			case 2:
				printf("Enter student modify percentage:\n");
				scanf("%f",&h->per);
				break;
			case 3:
				printf("Enter student modify name:\n");
				scanf("%s",h->name);
				printf("Enter student modify percentage:\n");
				scanf("%f",&h->per);
				break;
		}
		printf("After modification\n");
		x=1;
		PRINT(h);
		x=0;
	}
}

