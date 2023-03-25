#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct paperset2
{
	char ques[50];
	char opt1[50],opt2[50],opt3[50],opt4[50];
	char y[5];
	char x[5];
	int Rcount,Wcount;
}paperset2;

void showpaperset2(paperset2 p)
{
	printf("\n\t%s\n\t%s\t%s\t%s\t%s",p.ques,p.opt1,p.opt2,p.opt3,p.opt4);
}

void showquiz2(paperset2 p)
{
	printf("\n\t%s\n\t%s\t%s\t%s\t%s",p.ques,p.opt1,p.opt2,p.opt3,p.opt4);
	printf("\n\tEnter your Ans:");
	fflush(stdin);
	scanf("%c",&p.x[0]);
	if(p.x[0]==p.y[0])
	{
		printf("\n\tYOUR ANS IS RIGHT ...");
		p.Rcount;
		printf("\n\tPRESS ENTER FOR NEXT QUESTION");
		getch();
	}
	else
	{
		printf("\n\tYOUR ANS IS WRONG..");
		p.Wcount++;
		printf("\n\tPRESS ENTER FOR NEXT QUESTION");
		getch();
	}
	
}
void inputpaperset2(paperset2 *p)
{
	printf("\n\tEnter Question :");
	fflush(stdin);
	gets(p->ques);
	printf("\n\tenter option A :");
	gets(p->opt1);
	printf("\n\tenter option B :");
	gets(p->opt2);
	printf("\n\tenter option C :");
	gets(p->opt3);
	printf("\n\tenter option D :");
	gets(p->opt4);
	printf("\n\tenter correct ans :");
	fflush(stdin);
	scanf("%s",&p->y);
}
