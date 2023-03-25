#include<stdio.h>
#include<conio.h>
typedef struct player
{
	char name[30];
	char email[30];
	char gender[10];
	char phone[12];
}player;

void showplayer (player r)
{
	printf("\n\tName   of player : %s",r.name);
	printf("\n\tEmail  of player : %s",r.email);
	printf("\n\tGender of Player : %s",r.gender);
	printf("\n\tPhone  of Player : %s",r.phone);
}

int playercount()
{
	FILE *pp;
	int count = 0,tetp;
	pp = fopen("player.csv", "r");
	while(1)
	{
		tetp = getc(pp);
		if(tetp == '\n')
		{
			count++;
		}	
		else if(tetp == EOF)
		{
			break;
		}	
	}
	fclose(pp);
	return count;
}
void inputplayer (player *p)
{
	printf("\n\t\t\t\tPlayer Name  :");
	fflush(stdin);
	gets(p->name);
	
	printf("\n\t\t\t\tPlayer Email :");
	gets(p->email);
	
	printf("\n\t\t\t\tPlayer gender:");
	gets(p->gender);
	
	printf("\n\t\t\t\tPlayer phone :");
	gets(p->phone);
}

