#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
typedef struct paperset1
{
	char ques[500];
	char opt1[200],opt2[200],opt3[200],opt4[200];
	char y[5];
	char x[5];
	int Rcount,Wcount;
}paperset1;

void showpaperset1(paperset1 p)
{
	printf("\n\t%s\n\t%s\t%s\t%s\t%s",p.ques,p.opt1,p.opt2,p.opt3,p.opt4);
}

void showquiz1(paperset1 p)
{
	printf("\n\n\n\n\t\t\t\t%s\n\t%s\t%s\t%s\t%s",p.ques,p.opt1,p.opt2,p.opt3,p.opt4);
	printf("\n\tEnter your Ans:");
	fflush(stdin);
	scanf("%c",&p.x[0]);
	p.x[0]=toupper(p.x[0]);
	if(p.x[0]==p.y[0])
	{
		printf("\n\tYOUR ANS IS RIGHT ...");
		p.Rcount++;
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

void showresult1(paperset1 r)
{
	printf("\n\n\t\t\t\tTotal = 100");
	printf("\n\t\tYOUR SCORE %d/100",r.Rcount*10);
	printf("\n\t\tTotal Wrong Answers = %d",r.Wcount);
}
int paperset1count()
{
	FILE *fp;
	int count = 0,temp;
	fp = fopen("paperset1.csv", "r");
	while(1)
	{
		temp = getc(fp);
		if(temp == '\n')
		{
			count++;
		}	
		else if(temp == EOF)
		{
			count++;
			break;
		}	
	}
	fclose(fp);
	count=count%2;
	return count;
}
void inputpaperset1(paperset1 *p)
{
	printf("\n\tEnter Question :");
	fflush(stdin);
	gets(p->ques);
	printf("\n\tEnter Option A :");
	gets(p->opt1);
	printf("\n\tEnter Option B :");
	gets(p->opt2);
	printf("\n\tEnter Option C :");
	gets(p->opt3);
	printf("\n\tEnter Option D :");
	gets(p->opt4);
	printf("\n\tEnter Correct Ans :");
	fflush(stdin);
	scanf("%s",&p->y);
	p->y[0]=toupper(p->y[0]);
}
