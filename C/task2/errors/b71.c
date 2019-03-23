#include <stdio.h>
int main()
{
	int q,w,e,a,s,d,z,x,c,o;
	
	printf("Enter the first line of the matrix...");
	scanf("%d %d %d" ,&q,&w,&e);
	
	printf("Enter the second line of the matrix...");
	scanf("%d %d %d" ,&a,&s,&d);
	
	printf("Enter the final line of the matrix...");
	scanf("%d %d %d" ,&z,&x,&c);
	
	o= ((q*s*c)+(e*s*z));
	printf("%d",o);
	
	if(o>=0)
	printf("Result is : %d",o);
	
	else if(o<0)
	printf("Result is : %d" ,o*(-1));
	
	
	
	
	return 0;
}
