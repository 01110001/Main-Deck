//                                                                      ALPSEN ZEYBEK 2243731                                                                                          \\
#include <stdio.h>

void ShowMenu(void);
void MakeSelection(int*,int*);
void DisplayErrorMessage(int,int,int,int);
void ReturnChange(int,int,int*,double *,int*,int*,int*,int*,int*);
void Maintenance(int*,double*,int*,int*,int*,int*,int*);



int main(void)
{
	int deposit,selection,key=1,item[]={10,10,10,10,10,10,10,10,10},one=10,half=10,onefifth=10,onetenth=10,onetwentieth=10,PIN=0;
	double profit=0.0;
	
	while(key)
		{
		ShowMenu();
		MakeSelection(&deposit,&selection);
		if (selection==1)
			{
			if(item[0]==0)
				DisplayErrorMessage(0,0,1,0);
			else
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
			}
		else if (selection==2)
			{
			if(item[1]==0)
				DisplayErrorMessage(0,0,1,0);
			else
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
			}
		else if (selection==3)
			{
			if(item[2]==0)
				DisplayErrorMessage(0,0,1,0);
			else
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
			}
		else if (selection==4)
			{
			if(item[3]==0)
				DisplayErrorMessage(0,0,1,0);
			else
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
			}
		else if (selection==5)
			{
			if(item[4]==0)
				{
				DisplayErrorMessage(0,0,1,0);
				}
			else
				{
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
				}
			}
		else if (selection==6)
			{
			if(item[5]==0)
				{
				DisplayErrorMessage(0,0,1,0);
				}
			else
				{
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
				}
			}
		else if (selection==7)
			{
			if(item[6]==0)
				{
				DisplayErrorMessage(0,0,1,0);
				}
			else
				{
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
				}
			}
		else if (selection==8)
			{
			if(item[7]==0)
				{
				DisplayErrorMessage(0,0,1,0);
				}
			else
				{
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
				}
			}
		else if (selection==9)
			{
			if(item[8]==0)
				{
				DisplayErrorMessage(0,0,1,0);
				}
			else
				{
				ReturnChange(deposit,selection,item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
				}
			}
		else if (selection==-1)
			{
				while(PIN!=1481)
				{
				printf("\nEnter the PIN:\t");
				scanf(" %d",&PIN);
				}
				Maintenance(item,&profit,&one,&half,&onefifth,&onetenth,&onetwentieth);
			}
		}
	
	
	
	return 0;
}

void ShowMenu(void)
{
	printf("\n1. Water                    1.00 TL\n2. Coke                     1.20 TL\n3. Diet Coke                1.20 TL\n4. Iced Tea                 1.00 TL\n5. Swiss Chocolate          1.50 TL\n6. Candy                    0.95 TL\n7. Chips                    2.50 TL\n8. Bubble Gum               1.50 TL\n9. Turkish Delight          2.00 TL\n");
}
void MakeSelection(int *deposit,int *selection)
{
	int ddeposit,sselection,key=1;
	while(key)
		{
		printf("\nEnter your deposit:\t");
		scanf("%d",&ddeposit);
		printf("Enter item number you want:\t");
		scanf(" %d",&sselection);
		if(sselection==1)
			{
			if(ddeposit<1)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==2)
			{
			if(ddeposit<1.20)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==3)
			{
			if(ddeposit<1.20)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==4)
			{
			if(ddeposit<1)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==5)
			{
			if(ddeposit<1.50)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==6)
			{
			if(ddeposit<0.95)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==7)
			{
			if(ddeposit<2.50)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==8)
			{
			if(ddeposit<1.50)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==9)
			{
			if(ddeposit<2.00)
				DisplayErrorMessage(1,0,0,0);
			else
				{
				*deposit=ddeposit;
				*selection=sselection;
				key=0;
				}
			}
		else if(sselection==-1)
			{
			*deposit=ddeposit;
			*selection=sselection;
			key=0;
			}
		else
			{
			DisplayErrorMessage(0,1,0,0);
			}
		}
}

void ReturnChange(int deposit,int selection,int *item,double *profit,int *one,int *half,int *onefifth,int *onetenth,int *onetwentieth)
{
	int tone,thalf,tonefifth,tonetenth,tonetwentieth;
	double stock,change=0;
	
	if (selection==1)
		{
		stock=deposit-1;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while((stock>=1)&&(*one>=1))
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your water! Change is %d TL",change);
			item[0]-=1;
			*profit+=1;
			}
		}
		
		else if (selection==2)
		{
		stock=deposit-1.20;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your coke! Change is %d TL",change);
			item[1]-=1;
			*profit+=1.20;
			}
		}
		
		else if (selection==3)
		{
		stock=deposit-1.20;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your diet coke! Change is %d TL",change);
			item[2]-=1;
			*profit+=1.20;
			}
		}
		
		else if (selection==4)
		{
		stock=deposit-1;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your iced tea! Change is %d TL",change);
			item[3]-=1;
			*profit+=1;
			}
		}
		
		else if (selection==5)
		{
		stock=deposit-1.50;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your Swiss chocolate! Change is %d TL",change);
			item[4]-=1;
			*profit+=1.50;
			}
		}
		
		else if (selection==6)
		{
		stock=deposit-0.95;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your candy! Change is %d TL",change);
			item[5]-=1;
			*profit+=0.95;
			}
		}
		
		else if (selection==7)
		{
		stock=deposit-2.50;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your chips! Change is %d TL",change);
			item[6]-=1;
			*profit+=2.50;
			}
		}
		
		else if (selection==8)
		{
		stock=deposit-1.50;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your bubble gum! Change is %d TL",change);
			item[7]-=1;
			*profit+=1.50;
			}
		}
		
		else if (selection==9)
		{
		stock=deposit-2;
		tone=*one;
		thalf=*half;
		tonefifth=*onefifth;
		tonetenth=*onetenth;
		tonetwentieth=*onetwentieth;
		while(stock>=1)
			{
			if (*one>=1)
				{
				change+=1;
				*one--;
				stock-=1;
				}
			}
		while(stock>=0.5)
			{
			if (*half>=1)
				{
				change+=0.5;
				*half--;
				stock-=0.5;
				}
			}
		while(stock>=0.2)
			{
			if(*onefifth>=1)
				{
				change+=0.2;
				*onefifth--;
				stock-=0.2;
				}
			}
		while(stock>=0.1)
			{
			if(*onetenth>=1)
				{
				change+=0.1;
				*onetenth--;
				stock-=0.1;
				}
			}
		while(stock>=0.05)
			{
			if(*onetwentieth>=1)
				{
				change+=0.05;
				*onetwentieth--;
				stock-=0.05;
				}
			}
		if(stock>0)
			{
			DisplayErrorMessage(0,0,0,1);
			*one=tone;
			*half=thalf;
			*onefifth=tonefifth;
			*onetenth=tonetenth;
			*onetwentieth=tonetwentieth;
			}
		else
			{
			printf("Get your Turkish delight! Change is %d TL",change);
			item[8]-=1;
			*profit+=2.0;
			}
		}
}

void Maintenance(int *item,double *profit,int *one,int *half,int *onefifth,int *onetenth,int *onetwentieth)
{
	int i;
	printf("\t\tDAILY REPORT\n\n");
	printf("Number of items left:\n");
	printf("1. Water:%20d\n2. Coke:%21d\n3. Diet Coke:%16d\n4. Iced Tea:%17d\n5. Swiss Chocolate:%10d\n6. Candy:%20d\n7. Chips:%20d\n8. Bubble Gum:%15d\n9. Turkish Delight:%10d\n",item[0],item[1],item[2],item[3],item[4],item[5],item[6],item[7],item[8]);
	printf("\nNumber of coins left:\n");
	printf("1.00 TL:%10d\n0.50 TL:%10d\n0.20 TL:%10d\n0.10 TL:%10d\n0.05 TL:%10d\n",*one,*half,*onefifth,*onetenth,*onetwentieth);
	printf("Net income:%6d",*profit);
	for(i=0;i<9;i++)
		{
		item[i]=10;
		}
	*one=10;
	*half=10;
	*onefifth=10;
	*onetenth=10;
	*onetwentieth=10;
	printf("\nAll items in the vending machine are restocked");
}

void DisplayErrorMessage(int first,int second,int third,int fourth)
{
	if (first==1)
		printf("\n*** Deposit is insufficient! ***");
	else if(second==1)
		printf("\n*** Wrong selection! ***");
	else if(third==1)
		printf("\n*** There is not any left! ***");
	else if(fourth==1)
		printf("\n*** We cannot return your money; therefore, operation canceled! ***");
}
