#include<stdio.h>
#include<conio.h>
typedef struct paperset
{
	char title[30];
	char date[10];
	int noQ;
	
}paperset;

void showpaper(paperset p)
{
	printf("\n\t\tPaper Title :%s",p.title);
	printf("\n\t\tPaper Date : %s",p.date);
	printf("\n\t\tQuestion NO. %d",p.noQ);
}

void inputpaper(paperset *s)
{
	printf("\n\t\tEnter Title Of Paper : ");
	scanf("%s",s->title)
	
	printf("\n\t\tEnter Date Of Paper : ");
	scanf("%s",s->date);
	
	printf("\n\t\tEnter Question No. : ");
	scanf("%d",s->noQ);
}
