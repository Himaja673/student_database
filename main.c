#include"student.h"
int main(){
	ST *head=NULL;
	int n;
	while(1){
		printf(GREEN"******** STUDENT RECORD MENU ********\n1: Add new record\n2: Delete a record\n3: Show the list\n4: Modify a record\n5: Save records\n6: Save and Exit\n7: Sort the list\n8: Delete all the records\n9: Reverse the list\n");
		printf("10: file read\n11: EXIT\nEnter your choice\n"STOP);
		scanf(" %d",&n);
		switch(n){
			case 1:
				ADD(&head);
				break;
			case 2:
				DEL(&head);
				break;
			case 3:
				PRINT(head);
				break;
			case 4:
				MOD(head);
				break;
			case 5:
				SAVE(head);
				break;
			case 6:
				SAVE(head);
				exit(1);
			case 7:
				SORT(head);
				break;
			case 8:
				DEL_ALL(&head);
				break;
			case 9:
				REV(&head);
				break;
			case 10:
				READ_FILE(&head);
				break;
			case 11:
				exit(1);
			default:
				printf("Invalid option\n");
		}
	}
}

