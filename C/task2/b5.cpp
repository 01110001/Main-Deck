#include <stdio.h>
int main()
{
	int a,b;
	
	printf("Please select two numbers you want me to add one to another...");
	scanf("%d %d" ,&a,&b);
	
	if(a<0 && b<0)
	printf("|(a)+(b)|= %d" ,(a*-1)+(b*-1));
	
	else if(a>0 && b<0)
	printf("|(a)+(b)|= %d" ,a+(b*-1));
	
	else if(a>0 && b>0)
	printf("|(a)+(b)|= %d" ,a+b);
	
	else if(a<0 && b>0)
	printf("|(a)+(b)|= %d" ,(a*-1)+b);
	
	
	
	
	
	
	
	
	return 0;
}
