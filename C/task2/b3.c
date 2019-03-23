#include <stdio.h>

int main()
{
	int h;
	
	printf("Please type your mounthly hour of work : ");
	scanf("%d" ,&h);
	
	if(h<=90)
	printf("Your salary is : %d" ,h*20);
	else if(h<=160)
	printf("Your salary is : %d" ,h*30);
	else if(160<h)
	printf("Your salary is : %d" ,h*h);
	
	
	
	
	
	
	return 0;
}
