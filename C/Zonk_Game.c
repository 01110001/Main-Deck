/*                                                                                 Alpsen Zeybek 2243731																			   */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dice();
int play_computer();
int play_user();
void scoresheet(int,int,int,int);
int computer_strategy_decider(int,int,int,int,int,int);
int calculation(int,int,int,int,int,int);
									                                                                            /*Unfortunately program is incomplete.*/
int main()
{
	srand(time(NULL));
	int key1=1,key2=1,round=1,dice1=0,dice2=0,result1=0,result2=0,option=0,finalresult1=0,finalresult2=0,line=0;
	char choice1,choice2;
	
	printf("Hello, why don\'t we play Zonk! Would you join me(Y/N)?\n\t");										/*She welcomes the player...*/
	while(key1==1)
	{
	scanf("%c",&choice1);	
	printf("your choice is:%c\n",choice1);																				/*...and checks its willingness to play.*/
	fflush(stdin);
	if((choice1=='N')|| (choice1=='n'))
		{
		printf("See you later, then.");
		key1=0;
		}
	else if ((choice1!='Y')&&(choice1!='y'))
		{
		printf("\n*** Couldn\'t understand your choice, please try again! ***\n");								/*Error #1.1:Wrong preference.*/
		}
	else
		{
		printf("How many rounds you want to play?\n\t");														/*Receives the length of the game.*/
		while(key2==1)
			{
			scanf(" %d",&round);
			if(round<1)
				printf("\n*** Enter a proper round integer! ***\n");											/*Error #2:Wrong round input.*/
			else
				{
				dice1=dice();
				printf("Let's pick who gonna start.Try roll bigger than I did:%d\nDo you want me to roll in behalf of you(Y/N)?\n\t",dice1);
				while(key2==1)
					{
					scanf(" %c",&choice2);
					if((choice2=='N')||(choice2=='n'))
						{
						printf("See you later, then.");															/*Player chooses to exit :/ */
						key2=0;
						key1=0;
						}
					else if((choice2!='Y')&&(choice2!='y'))
						printf("*** Enter either (Y)es or (N)o next time! ***\n");								/*Error #3:A guidline for the user.*/
					else
						{
						while((dice2=dice())==(dice1))
							{
							dice2=dice();
							}
						printf("You got %d\n",dice2);
						if (dice1>dice2)																		/*Computer starts or...*/
							{
							printf("I\'m going to start!\n");
							while(round)
								{
								result1=0;
								result2=0;
								result1=play_computer();
								finalresult1+=result1;
								result2=play_user();
								finalresult2+=result2;
								scoresheet(finalresult1,finalresult2,option,line);
								round-=1;
								line=1;
								}
							key2=0;
							key1=0;
							}
						else																					/*...the player starts.*/
							{
							printf("You are going to start!\n");
							option=1;
							while(round)
								{
								result1=0;
								result2=0;
								result1=play_user();
								finalresult1+=result1;
								result2=play_computer();
								finalresult2+=result2;
								scoresheet(finalresult1,finalresult2,option,line);
								round-=1;
								line=1;
								}
							key2=0;
							key1=0;
							}
						}
					}
				}
			key2=0;
			}
		}
	}
	return 0;
}

int dice(void)																						/*Die rolls in this teeny-weeny function.*/
{
	int dice_gen;
	
	dice_gen=rand()%6+1;
	return dice_gen;
}

int play_user(void)																					/*User play interface function.*/
{
	int dice1=0,dice2=0,dice3=0,dice4=0,dice5=0,dice6=0,checker=0,rollagain=0,option1=0,option2=0,option3=0,option4=0,option5=0,option6=0,point=0,key1=1,available1=0,available2=0,available3=0,available4=0,available5=0,available6=0,check1=1,check2=1,check3=1,check4=1,check5=1,check6=1,doublecheck=2,zonkcheck=0,unavailable=0,representer=0;
	char choice;
	printf("\nIt\'s your turn:\n");
	printf("dice1 is: %d\n",dice1=dice());
	printf("dice2 is: %d\n",dice2=dice());
	printf("dice3 is: %d\n",dice3=dice());
	printf("dice4 is: %d\n",dice4=dice());
	printf("dice5 is: %d\n",dice5=dice());
	printf("dice6 is: %d\n",dice6=dice());
	if (calculation(dice1,dice2,dice3,dice4,dice5,dice6)==0)										/*Before function rolls, it controls whether that is already zonk or not.*/
		{
		point=0;
		printf("You are ZONK!!!");
		return point;
		}
	else
		{
		while(key1==1)
			{
			option1=0;
			option2=0;
			option3=0;
			option4=0;
			option5=0;
			option6=0;
			printf("Dou you want to continue rolling(Y) or will you keep your dice(N)?");			/*Receives decision of the player.*/
			scanf(" %c",&choice);
			fflush(stdin);
			if((choice=='N')||(choice=='n'))
				{
				key1=0;
				return point;
				}
			else if((choice!='Y')&&(choice!='y'))
				{
				printf("*** Couldn\'t understand your choice! ***\n");								/*Error #1.2:Wrong preference.*/
				}
			else
				{
				printf("Enter dice number(s) you want to roll again WITHOUT ANY BLANK:\n\t");
				scanf(" %d",&rollagain);
				while(rollagain>0)
					{
					checker=rollagain%10;															/*Receives the intended dices as if they were one long integer.*/
					rollagain/=10;
					if((checker==1) &&(check1==1))													/*Specified dices start rolling !*/
						{
						printf("dice1 is: %d\n",dice1=dice());
						available1=1;
						if(dice1==1)
							option1+=1;
						else if(dice1==2)
							option2+=1;
						else if(dice1==3)
							option3+=1;
						else if(dice1==4)
							option4+=1;
						else if(dice1==5)
							option5+=1;
						else if(dice1==6)
							option6+=1;
						}
					else if((checker==2)&&(check2==1))
						{
						printf("dice2 is: %d\n",dice2=dice());
						available2=1;
						if(dice2==1)
							option1+=1;
						else if(dice2==2)
							option2+=1;
						else if(dice2==3)
							option3+=1;
						else if(dice2==4)
							option4+=1;
						else if(dice2==5)
							option5+=1;
						else if(dice2==6)
							option6+=1;
						}
					else if((checker==3) &&(check3==1))
						{
						printf("dice3 is: %d\n",dice3=dice());
						available3=1;
						if(dice3==1)
							option1+=1;
						else if(dice3==2)
							option2+=1;
						else if(dice3==3)
							option3+=1;
						else if(dice3==4)
							option4+=1;
						else if(dice3==5)
							option5+=1;
						else if(dice3==6)
							option6+=1;
						}
					else if((checker==4) &&(check4==1))
						{
						printf("dice4 is: %d\n",dice4=dice());
						available4=1;
						if(dice4==1)
							option1+=1;
						else if(dice4==2)
							option2+=1;
						else if(dice4==3)
							option3+=1;
						else if(dice4==4)
							option4+=1;
						else if(dice4==5)
							option5+=1;
						else if(dice4==6)
							option6+=1;
						}
					else if((checker==5) &&(check5==1))
						{
						printf("dice5 is: %d\n",dice5=dice());
						available5=1;
						if(dice5==1)
							option1+=1;
						else if(dice5==2)
							option2+=1;
						else if(dice5==3)
							option3+=1;
						else if(dice5==4)
							option4+=1;
						else if(dice5==5)
							option5+=1;
						else if(dice5==6)
							option6+=1;
						}
					else if((checker==6) &&(check6==1))
						{
						printf("dice6 is: %d\n",dice6=dice());
						available6=1;
						if(dice6==1)
							option1+=1;
						else if(dice6==2)
							option2+=1;
						else if(dice6==3)
							option3+=1;
						else if(dice6==4)
							option4+=1;
						else if(dice6==5)
							option5+=1;
						else if(dice6==6)
							option6+=1;
						}
					else if((checker<0)&&(checker>6))
						printf("\n*** Not possible to roll dice %d ***\n",checker);						/*Error #4:Dice number received out of 1-6 limit.*/
						if (available1==0)																/*Weeds out kept dices for future availability*/
							{
							check1=0;
							unavailable+=1;
							}
						if (available2==0)
							{
							check2=0;
							unavailable+=1;
							}
						if (available3==0)
							{
							check3=0;
							unavailable+=1;
							}
						if (available4==0)
							{
							check4=0;
							unavailable+=1;
							}
						if (available5==0)
							{
							check5=0;
							unavailable+=1;
							}
						if (available6==0)
							{
							check6=0;
							unavailable+=1;
							}
						representer=unavailable;
					}
				if((option1==6) && (available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6))	/*Starts calculating points.*/
					{
					point=2000;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				else if( (option1==1)&&(option2==1)&&(option3==1)&&(option4==1)&&(option5==1)&&(option6==1) && (available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6) ) 
					{
					point=1500;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				else if( ((option2==6)||(option3==6)||(option4==6)||(option5==6)||(option6==6)) &&(available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6))
					{
					point=1000;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				if((option2==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=200;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option3==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=300;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option4==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=400;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option5==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=500;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option6==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=600;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option1>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=100;
					representer-=1;
					zonkcheck=1;
					}
				if((option1>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=100;
					representer-=1;
					zonkcheck=1;
					}
				if((option5>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=50;
					representer-=1;
					zonkcheck=1;
					}
				if((option5>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=50;
					representer-=1;
					zonkcheck=1;
					}
				if(zonkcheck==0)																				/*If there is no point available, automatically pushes out of function with zero point with a warning of zonk situation.*/
					{
					printf("You are Zonk!!");
					point=0;
					return point;
					}
				zonkcheck=0;
				doublecheck=2;
				}
			}
		}
}

void scoresheet(int first,int second,int option,int line)			/*function checks if it is first time its called(with -line- input) and gives output according to received point inputs(with -first-&-second-) and also order of player-computer output(with -order- input).*/
{
	if(option==0)
		{
		if(line==0)
			{
			printf("\tComputer\t\t\t\t\tPlayer\n\n");
			printf("\t%d\t\t\t\t\t%d\n",first,second);
			}
		else
			{
			printf("\t%d\t\t\t\t\t\t%d\n",first,second);
			}
		}
	else if(option==1)
		{
		if(line==0)
			{
			printf("\tPlayer\t\t\t\t\tComputer\n\n");
			printf("\t%d\t\t\t\t\t%d\n",first,second);
			}
		else
			{
			printf("\t%d\t\t\t\t\t\t%d\n",first,second);
			}
		}
}

int calculation(int dice1,int dice2,int dice3,int dice4,int dice5,int dice6)		/*This function is called where is a necessity to check if its already zonk situation or not beforehand applying other operations*/
{
	int checker=0,rollagain=0,option1=0,option2=0,option3=0,option4=0,option5=0,option6=0,point=0,key1=1,available1=0,available2=0,available3=0,available4=0,available5=0,available6=0,check1=1,check2=1,check3=1,check4=1,check5=1,check6=1,doublecheck=2,zonkcheck=0,unavailable=0,representer=0;
	
	rollagain=123456;
	while(rollagain>0)
					{
					checker=rollagain%10;
					rollagain/=10;
					if(checker==1)
						{
						if(dice1==1)
							option1+=1;
						else if(dice1==2)
							option2+=1;
						else if(dice1==3)
							option3+=1;
						else if(dice1==4)
							option4+=1;
						else if(dice1==5)
							option5+=1;
						else if(dice1==6)
							option6+=1;
						}
					else if(checker==2)
						{
						if(dice2==1)
							option1+=1;
						else if(dice2==2)
							option2+=1;
						else if(dice2==3)
							option3+=1;
						else if(dice2==4)
							option4+=1;
						else if(dice2==5)
							option5+=1;
						else if(dice2==6)
							option6+=1;
						}
					else if(checker==3)
						{
						if(dice3==1)
							option1+=1;
						else if(dice3==2)
							option2+=1;
						else if(dice3==3)
							option3+=1;
						else if(dice3==4)
							option4+=1;
						else if(dice3==5)
							option5+=1;
						else if(dice3==6)
							option6+=1;
						}
					else if(checker==4)
						{
						if(dice4==1)
							option1+=1;
						else if(dice4==2)
							option2+=1;
						else if(dice4==3)
							option3+=1;
						else if(dice4==4)
							option4+=1;
						else if(dice4==5)
							option5+=1;
						else if(dice4==6)
							option6+=1;
						}
					else if(checker==5)
						{
						if(dice5==1)
							option1+=1;
						else if(dice5==2)
							option2+=1;
						else if(dice5==3)
							option3+=1;
						else if(dice5==4)
							option4+=1;
						else if(dice5==5)
							option5+=1;
						else if(dice5==6)
							option6+=1;
						}
					else if(checker==6)
						{
						if(dice6==1)
							option1+=1;
						else if(dice6==2)
							option2+=1;
						else if(dice6==3)
							option3+=1;
						else if(dice6==4)
							option4+=1;
						else if(dice6==5)
							option5+=1;
						else if(dice6==6)
							option6+=1;
						}
					}
				if(option1==6)
					{
					point=2000;
					}
				else if(option1==1)
					{
					point=1500;
					}
				else if(option2==6)
					{
					point=1000;
					}
				if(option2==3)
					{
					point+=200;
					}
				if(option3==3)
					{
					point+=300;
					}
				if(option4==3)
					{
					point+=400;
					}
				if(option5==3)
					{
					point+=500;
					}
				if(option6==3)
					{
					point+=600;
					}
				if(option1>=1)
					{
					point+=100;
					}
				if(option1>=1)
					{
					point+=100;
					}
				if(option5>=1)
					{
					point+=50;
					}
				if(option5>=1)
					{
					point+=50;
					}
				
	return point;
}

int play_computer()																				/*Function that is basically similary with play_user*/
{
	int dice1=0,dice2=0,dice3=0,dice4=0,dice5=0,dice6=0,checker=0,rollagain=0,option1=0,option2=0,option3=0,option4=0,option5=0,option6=0,point=0,key1=1,available1=0,available2=0,available3=0,available4=0,available5=0,available6=0,check1=1,check2=1,check3=1,check4=1,check5=1,check6=1,doublecheck=2,zonkcheck=0,unavailable=0,representer=0;
	char choice;
	printf("\nIt\'s my turn:\n");
	printf("dice1 is: %d\n",dice1=dice());
	printf("dice2 is: %d\n",dice2=dice());
	printf("dice3 is: %d\n",dice3=dice());
	printf("dice4 is: %d\n",dice4=dice());
	printf("dice5 is: %d\n",dice5=dice());
	printf("dice6 is: %d\n",dice6=dice());
	if (calculation(dice1,dice2,dice3,dice4,dice5,dice6)==0)
		{
		point=0;
		printf("I am ZONK!!!");
		return 0;
		}
	else
		{
		return computer_strategy_decider(dice1,dice2,dice3,dice4,dice5,dice6);
		}
}

int computer_strategy_decider(int dice1,int dice2,int dice3,int dice4,int dice5,int dice6)
{
	int checker=0,rollagain=0,option1=0,option2=0,option3=0,option4=0,option5=0,option6=0,point=0,key1=1,available1=0,available2=0,available3=0,available4=0,available5=0,available6=0,check1=1,check2=1,check3=1,check4=1,check5=1,check6=1,doublecheck=2,zonkcheck=0,unavailable=0,representer=0;
	
	while(key1==1)
			{
			option1=0;
			option2=0;
			option3=0;
			option4=0;
			option5=0;
			option6=0;
			if(calculation(dice1,dice2,dice3,dice4,dice5,dice6)>=350)
				{
				printf("I am stopping here.");
				return calculation(dice1,dice2,dice3,dice4,dice5,dice6);
				}
			else																									/*Incomplete Part*/
				{																										
				while(rollagain>0)
					{
					checker=rollagain%10;
					rollagain/=10;
					if((checker==1) &&(check1==1))
						{
						printf("I rolled dice1 again and it is now: %d\n",dice1=dice());
						available1=1;
						if(dice1==1)
							option1+=1;
						else if(dice1==2)
							option2+=1;
						else if(dice1==3)
							option3+=1;
						else if(dice1==4)
							option4+=1;
						else if(dice1==5)
							option5+=1;
						else if(dice1==6)
							option6+=1;
						}
					else if((checker==2)&&(check2==1))
						{
						printf("I rolled dice2 again and it is now: %d\n",dice2=dice());
						available2=1;
						if(dice2==1)
							option1+=1;
						else if(dice2==2)
							option2+=1;
						else if(dice2==3)
							option3+=1;
						else if(dice2==4)
							option4+=1;
						else if(dice2==5)
							option5+=1;
						else if(dice2==6)
							option6+=1;
						}
					else if((checker==3) &&(check3==1))
						{
						printf("I rolled dice3 again and it is now: %d\n",dice3=dice());
						available3=1;
						if(dice3==1)
							option1+=1;
						else if(dice3==2)
							option2+=1;
						else if(dice3==3)
							option3+=1;
						else if(dice3==4)
							option4+=1;
						else if(dice3==5)
							option5+=1;
						else if(dice3==6)
							option6+=1;
						}
					else if((checker==4) &&(check4==1))
						{
						printf("I rolled dice4 again and it is now: %d\n",dice4=dice());
						available4=1;
						if(dice4==1)
							option1+=1;
						else if(dice4==2)
							option2+=1;
						else if(dice4==3)
							option3+=1;
						else if(dice4==4)
							option4+=1;
						else if(dice4==5)
							option5+=1;
						else if(dice4==6)
							option6+=1;
						}
					else if((checker==5) &&(check5==1))
						{
						printf("I rolled dice5 again and it is now: %d\n",dice5=dice());
						available5=1;
						if(dice5==1)
							option1+=1;
						else if(dice5==2)
							option2+=1;
						else if(dice5==3)
							option3+=1;
						else if(dice5==4)
							option4+=1;
						else if(dice5==5)
							option5+=1;
						else if(dice5==6)
							option6+=1;
						}
					else if((checker==6) &&(check6==1))
						{
						printf("I rolled dice6 again and it is now: %d\n",dice6=dice());
						available6=1;
						if(dice6==1)
							option1+=1;
						else if(dice6==2)
							option2+=1;
						else if(dice6==3)
							option3+=1;
						else if(dice6==4)
							option4+=1;
						else if(dice6==5)
							option5+=1;
						else if(dice6==6)
							option6+=1;
						}
					else
						if (available1==0)
							{
							check1=0;
							unavailable+=1;
							}
						if (available2==0)
							{
							check2=0;
							unavailable+=1;
							}
						if (available3==0)
							{
							check3=0;
							unavailable+=1;
							}
						if (available4==0)
							{
							check4=0;
							unavailable+=1;
							}
						if (available5==0)
							{
							check5=0;
							unavailable+=1;
							}
						if (available6==0)
							{
							check6=0;
							unavailable+=1;
							}
						representer=unavailable;
					}
				if((option1==6) && (available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6))
					{
					point=2000;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				else if( (option1==1)&&(option2==1)&&(option3==1)&&(option4==1)&&(option5==1)&&(option6==1) && (available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6) ) 
					{
					point=1500;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				else if( ((option2==6)||(option3==6)||(option4==6)||(option5==6)||(option6==6)) &&(available1==0)&&(available2==0)&&(available3==0)&&(available4==0)&&(available5==0)&&(available6==0)&&(representer==6))
					{
					point=1000;
					doublecheck=0;
					zonkcheck=1;
					representer=0;
					}
				if((option2==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=200;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option3==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=300;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option4==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=400;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option5==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=500;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option6==3)&&(doublecheck>0)&&(representer>=3))
					{
					point+=600;
					doublecheck-=1;
					zonkcheck=1;
					representer-=3;
					}
				if((option1>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=100;
					representer-=1;
					zonkcheck=1;
					}
				if((option1>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=100;
					representer-=1;
					zonkcheck=1;
					}
				if((option5>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=50;
					representer-=1;
					zonkcheck=1;
					}
				if((option5>=1)&&(doublecheck>0)&&(representer>=1))
					{
					point+=50;
					representer-=1;
					zonkcheck=1;
					}
				if(zonkcheck==0)
					{
					printf("I am Zonk!!");
					point=0;
					return point;
					}
				zonkcheck=0;
				doublecheck=2;
				}
			}
}
