#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"colour.h"
int rollnumber;
int x;
int del;
int pre;
typedef struct st{
	int roll;
	char name[30];
	float per;
	struct st *next;
}ST;
extern void ADD(ST **);
extern void DEL(ST **);
extern void PRINT(ST *);
extern void MOD(ST *);
extern void SAVE(ST *);
extern void SORT(ST *);
extern void DEL_ALL(ST **);
extern void REV(ST **);
extern void READ_FILE(ST **);

