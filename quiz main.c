#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#define NUL 0
#include "player.c"
#include "paperset1.c"
#include "paperset2.c"
#include "paperset3.c"
void main()
{
	int choice,idx;
	player *PArr=NUL;
	paperset1 *p1Arr=NUL;
	paperset2 *p2Arr=NUL;
	paperset3 *p3Arr=NUL;
	float score;
	int count;
	int k;
	FILE *fp;
	FILE *fp1;
	FILE *p1;
	FILE *p2;
	FILE *p3;
	char str[500];
	char pdata[500];
	char pass[10];
	while(1)
	{
		system("cls");
		printf("\n\n\t\t\t\t");
			for(k=0; k<40; k++)
		{
			printf("*");
			Sleep(10);
		}
		printf("\n\t\t\t\t****************************************");
		printf("\n\t\t\t\t**   *   *    *    *    *    *    *   **");
		printf("\n\t\t\t\t**     Welcome To The Quiz Game       **");
		printf("\n\t\t\t\t**   *   *    *    *    *    *    *   **");
		printf("\n\t\t\t\t****************************************");
		printf("\n\t\t\t\t");
		for(k=0; k<40; k++)
		{
			printf("*");
			Sleep(10);
		}
		printf("\n\n\n\t\t\t\t");
		for(k=0; k<15; k++)
		{
			printf("-");
			Sleep(10);
		}
		printf("MAIN MENU");
		for(k=0; k<15; k++)
		{
			printf("-");
			Sleep(10);
		}
		
		printf("\n\t\t\t\t                                        ");
		printf("\n\t\t\t\t.  1.Administrator                      ");
		printf("\n\t\t\t\t.  2.Player                             ");
		printf("\n\t\t\t\t.  3.Exit                               ");
		printf("\n\t\t\t\t");
		for(k=0; k<40; k++)
		{
			printf("-");
			Sleep(10);
		}
		
		printf("\n\n\t\t\t\t-> Enter Your Choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				system("cls");
				printf("\n\n\n\n\t\t\t\tEnter Password To Continue\n\t\t\t\t\t");
				fflush(stdin);
				gets(pass);
				if(strcmp(pass,"1234")==0)
				{
					printf("\n\t\t\t\tLogin Sucessful...");
					sleep(1);
			
					while(1)
					{
						system("cls");
						printf("\n\n\n\t\t\t\t");
						for(k=0; k<12; k++)
						{
							printf("-");
							Sleep(10);
						}
						printf("ADMINISTRATOR MENU");
						for(k=0; k<12; k++)
						{
							printf("-");
							Sleep(10);
						}	
						printf("\n\t\t\t\t                             ");
						printf("\n\t\t\t\t.  1.Enter Questions         ");
						printf("\n\t\t\t\t.  2.Show All Questions      ");
						printf("\n\t\t\t\t.  3.Return To Main Menu     ");
						printf("\n\t\t\t\t");
						for(k=0; k<42; k++)
						{
							printf("-");
							Sleep(10);
						}
		
						printf("\n\n\t\t\t\t->Enter Your Choice :");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								while(1)
								{
									system("cls");
									printf("\n\t\t\t\t1.PAPERSET 1");
									printf("\n\t\t\t\t2.PAPERSET 2");
									printf("\n\t\t\t\t3.PAPERSET 3");
									printf("\n\t\t\t\t4.Back");
								
									printf("\n\t\t\t\tEnter Your Choice :");
									scanf("%d",&choice);
								
									switch(choice)
									{
										case 1://input question paperset 1
											printf("\n\t\t\t\tHow many questions you want : ");
											scanf("%d",&count);
							
											p1Arr=(paperset1 *)calloc(sizeof(paperset1),count);
							
											p1=fopen("paperset1.csv","a");
											for(k=0; k<count; k++)
											{
												inputpaperset1((p1Arr+k));
												fprintf(p1,"\nQ: %s\nOption A:%s\nOption B:%s\nOption C:%s\nOption D:%s\n%s",(p1Arr+k)->ques,(p1Arr+k)->opt1,(p1Arr+k)->opt2,(p1Arr+k)->opt3,(p1Arr+k)->opt4,(p1Arr+k)->y);
											}
											printf("\n\t\t\t\tQuestions Inserted Successfully....");
											fclose(p1);
											getch();
											break;
										
										case 2: //input Q for paperset2
											printf("\n\t\t\t\tHow many questions you want : ");
											scanf("%d",&count);
							
											p2Arr=(paperset2 *)calloc(sizeof(paperset2),count);
							
											p2=fopen("paperset2.csv","a");
											for(k=0; k<count; k++)
											{
												inputpaperset2((p2Arr+k));
												fprintf(p2,"\n\tQ: %s\noption 1:%s\noption 2:%s\noption 3:%s\noption 4:%s\n%c",(p1Arr+k)->ques,(p1Arr+k)->opt1,(p1Arr+k)->opt2,(p1Arr+k)->opt3,(p1Arr+k)->opt4,(p1Arr+k)->y);
											}
											printf("\n\t\t\t\tQuestions Inserted Successfully....");
											fclose(p2);
											getch();
											break;
										
										case 3: //input Q for paperset 3
											printf("\n\t\t\t\tHow many questions you want : ");
											scanf("%d",&count);
							
											p3Arr=(paperset3 *)calloc(sizeof(paperset3),count);
							
											p3=fopen("paperset3.csv","a");
											for(k=0; k<count; k++)
											{
												inputpaperset3((p3Arr+k));
												fprintf(p3,"\nQ: %s\noption A:%s\noption B:%s\noption C:%s\noption D:%s\n%c",(p1Arr+k)->ques,(p1Arr+k)->opt1,(p1Arr+k)->opt2,(p1Arr+k)->opt3,(p1Arr+k)->opt4,(p1Arr+k)->y);
											}
											printf("\n\t\t\t\tQuestions Inserted Successfully....");
											fclose(p3);
											getch();
											break;
										
										case 4:
											break;
									}
									if(choice==4)
									break;	
								}
								if(choice==4)
								break;
							
							case 2:
								while(1)
								{
									system("cls");
									printf("\n\n\n\t\t\t\t\t1.PAPERSET 1");
									printf("\n\t\t\t\t\t2.PAPERSET 2");
									printf("\n\t\t\t\t\t3.PAPERSET 3");
									printf("\n\t\t\t\t\t4.Back");
								
									printf("\n\t\t\t\t\tEnter Your Choice :");
									scanf("%d",&choice);
								
									switch(choice)
									{
										case 1:
											
											p1 = fopen("paperset1.csv","r");
											count=10;
											p1Arr = (paperset1 *)calloc(sizeof(paperset1),count);
											fgets(str,100,p1);
											idx = 0;
											while(1)
											{
									
											fgets(str,500,p1);
											strcpy((p1Arr+idx)->ques,str);
								
											fgets(str,200,p1);
											strcpy((p1Arr+idx)->opt1,str);
										
											fgets(str,200,p1);
											strcpy((p1Arr+idx)->opt2,str);
									
											fgets(str,200,p1);
											strcpy((p1Arr+idx)->opt3,str);
									
											fgets(str,200,p1);
											strcpy((p1Arr+idx)->opt4,str);
	
											fgets(str,200,p1);
											strcpy((p1Arr+idx)->y,str);

											idx++;

											if(getc(p1) == EOF)
											break;
											}
											fclose(p1);
							
											printf("\n\n\t\t\t\tShowing  All Questions:\n ");
											for(k=0;k<10; k++)
											{
												showpaperset1(*(p1Arr+k));
												printf("\n\t___________________________________________\n");
												getch();	
											}
											getch();
											break;
										case 2:
											p2 = fopen("paperset2.csv","r");
											count=10;
											p2Arr = (paperset2 *)calloc(sizeof(paperset2),count);
											fgets(str,100,p2);
											idx = 0;
											while(1)
											{
									
											fgets(str,500,p2);
											strcpy((p2Arr+idx)->ques,str);
								
											fgets(str,200,p2);
											strcpy((p2Arr+idx)->opt1,str);
										
											fgets(str,200,p2);
											strcpy((p2Arr+idx)->opt2,str);
									
											fgets(str,200,p2);
											strcpy((p2Arr+idx)->opt3,str);
									
											fgets(str,200,p2);
											strcpy((p2Arr+idx)->opt4,str);
	
											fgets(str,200,p2);
											strcpy((p2Arr+idx)->y,str);

											idx++;

											if(getc(p2) == EOF)
											break;
											}
											fclose(p2);
							
											printf("\n\n\t\t\t\tShowing  All Questions:\n ");
											for(k=0;k<10; k++)
											{
												showpaperset2(*(p2Arr+k));
												printf("\n\t___________________________________________\n");
												getch();	
											}
											getch();
											break;
										case 3:
											p3 = fopen("paperset3.csv","r");
											count=10;
											p3Arr = (paperset3 *)calloc(sizeof(paperset3),count);
											fgets(str,100,p3);
											idx = 0;
											while(1)
											{
									
											fgets(str,500,p3);
											strcpy((p3Arr+idx)->ques,str);
								
											fgets(str,200,p3);
											strcpy((p3Arr+idx)->opt1,str);
										
											fgets(str,200,p3);
											strcpy((p3Arr+idx)->opt2,str);
									
											fgets(str,200,p3);
											strcpy((p3Arr+idx)->opt3,str);
									
											fgets(str,200,p3);
											strcpy((p3Arr+idx)->opt4,str);
	
											fgets(str,200,p3);
											strcpy((p3Arr+idx)->y,str);

											idx++;

											if(getc(p3) == EOF)
											break;
											}
											fclose(p3);
							
											printf("\n\n\t\t\t\tShowing  All Questions:\n ");
											for(k=0;k<10; k++)
											{
												showpaperset3(*(p3Arr+k));
												printf("\n\t___________________________________________\n");
												getch();	
											}
											getch();
											break;
										case 4:
											break;
									}
									if(choice==4)
									break;
								}
								if(choice==4)
								break;
							case 3:
								printf("\n\t\t\t\tReturning To Main Menu");
								for(k=0;k<5;k++)
								{
									printf(".");
									Sleep(20);
								}
								break;
							
						}
						if(choice==3)
						break;
					}
					if(choice==3)
					break;
				}
				else
				{
					printf("\n\n\n\t\t\t\tPassword Incorrect");
					getch();
					break;
				}
				
			case 2:
				while(1)
				{
					system("cls");
					printf("\n\n\n\t\t\t\t");
					for(k=0; k<12; k++)
					{
						printf("-");
						Sleep(10);
					}
					printf("PLAYER MENU");
					for(k=0; k<12; k++)
					{
						printf("-");
						Sleep(10);
					}
					printf("\n\n\t\t\t\t1.Enter in Quiz");
					printf("\n\t\t\t\t2.Show All Player");
					printf("\n\t\t\t\t3.Results");
					printf("\n\t\t\t\t4.Return To Main Menu");
					printf("\n\n\t\t\t\t");
					for(k=0; k<35; k++)
					{
						printf("-");
						Sleep(10);
					}
					
					printf("\n\t\t\t\tEnter Your Choice : ");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
							system("cls");
							printf("\n\n\n\t\t\t\tWelcome To Quiz :");
							printf("\n\t\t\t\t---Please Enter Few Details---");
							count=2;
							PArr=(player *)calloc(sizeof(player),count);
							fp1=fopen("player.csv","a");
							for(k=0;k<2;k++);
							{
								inputplayer((PArr+k));
								fprintf(fp1,"\n%s\t%s\t%s\t%s",(PArr+k)->name,(PArr+k)->email,(PArr+k)->gender,(PArr+k)->phone);
										
							}
							printf("\n\n\n\t\t\t\tDetails Inserted Successfully...");
							fclose(fp1);
							getch();
							system("cls");
							printf("\n\n\n\t\t\t\t---Choose one--- ");
							printf("\n\t\t\t\t1.Quiz 1");
							printf("\n\t\t\t\t2.Quiz 2");
							printf("\n\t\t\t\t3.Quiz 3");
							
							printf("\n\t\t\t\tEnter Your Choice : ");
							scanf("%d",&choice);
							
							switch(choice)
							{
								case 1:
										p1 = fopen("paperset1.csv","r");
										count = 10;
										p1Arr = (paperset1 *)calloc(sizeof(paperset1),count);
										fgets(str,100,p1);
										idx = 0;
										while(1)
										{
											fgets(str,300,p1);
											strcpy((p1Arr+idx)->ques,str);
								
											fgets(str,300,p1);
											strcpy((p1Arr+idx)->opt1,str);
										
											fgets(str,300,p1);
											strcpy((p1Arr+idx)->opt2,str);
									
											fgets(str,300,p1);
											strcpy((p1Arr+idx)->opt3,str);
									
											fgets(str,300,p1);
											strcpy((p1Arr+idx)->opt4,str);

											fgets(str,50,p1);
											strcpy((p1Arr+idx)->y,str);

											idx++;

											if(getc(p1) == EOF)
											break;
										}
										fclose(p1);
										
										for(k=0;k<10; k++)
										{
											system("cls");
											showquiz1(*(p1Arr+k));
										}
										printf("\n\t\t----Quiz Is Over------");
										printf("\\nn\t\tPRESS ENTER FOR RESULTS");
										getch();
										system("cls");
										fp1=fopen("player.csv","r");
										for(k=0;k=1;k++);
										{
											showplayer(*(PArr+k));		
										}
										fclose(fp1);
										/*for(k=0;k=1;k++);
										{
											showresult1();		
										}*/
										
										
										getch();
										break;					
							}
						case 2:
							if(PArr==NUL)
							{
								count = playercount();
								//printf("%d",count);
								fp1=fopen("player.csv","r");
								PArr=(player *)calloc(sizeof(player),count);
								fscanf(fp1,"%s",pdata);
								fscanf(fp1,"%s",pdata);
								fscanf(fp1,"%s",pdata);
								fscanf(fp1,"%s",pdata);
								idx=0;
								
								while(1)
								{
									
									fscanf(fp1,"%s",pdata);
									strcpy((PArr+idx)->name,pdata);
									
									fscanf(fp1,"%s",pdata);
									strcpy((PArr+idx)->email,pdata);
									
									fscanf(fp1,"%s",pdata);
									strcpy((PArr+idx)->gender,pdata);
									
									fscanf(fp1,"%s",pdata);
									strcpy((PArr+idx)->phone,pdata);
									
									idx++;
									
									if(getc(fp1) == EOF)
									break;
								}
								fclose(fp1);
							}
							if(PArr!=NUL)
							{
								FILE *fptr;
								char name[30];
								char email[30];
								char gender[10];
								char phone[12];

								fptr = fopen("player.csv", "r");

								while(fscanf(fptr,"%s%s%s%s",name,email,gender,phone) != EOF)
								{
									printf("\n\t%s\t%s\t%s\t%s",name,email,gender,phone);
								}
								fclose(fptr);
							}
								//printf("\n\t\t-----Showing All Players----");
								/*for(k=0;k<count;k++)
								{
									
									showplayer(*(PArr+k));
									printf("\n\t\t******************************************\n");
								}*/
							
							getch();
							break;
						case 3:
							break;
						case 4:
							printf("\n\n\t\t\t\tGoing To Main Menu");
							for(k=0; k<5;k++)
							{
								printf(".");
								Sleep(20);
							}
							break;
					}
					if(choice==4)
					break;
				}
				break;
			case 3:
				printf("\n\n\n\t\t\t\tTerminating Program....");
				sleep(30);
				exit(0);
				getch();
			}
		}
	}

