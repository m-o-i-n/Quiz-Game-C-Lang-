#include<stdio.h>
#include<conio.h>
typedef struct Qbank
{
	char Que[200];
	char Ans[100];
	char Type[30];
}Qbank;
void ShowQues(Qbank q)
{
	printf("\n\t\t %s",q.Que);
	printf("\n\t\t %s",q.Ans);
	printf("\n\t\t %s",q.Type);
}
void inputQues(Qbank *p)
{
	printf("\n\t\tEnter question : ");
	//scanf("%s",p->Que);
	fflush(stdin);
	gets(p->Que);
	printf("\n\t\tEnter ans : ");
	//scanf("%s",p->Ans);
	gets(p->Ans);
	printf("\n\t\tEnter type : ");
	//scanf("%s",p->Type);
	gets(p->Type);
	
}
