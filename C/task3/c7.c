#include <stdio.h>

int main(){
int s,a=0,b=0;
	printf("Please enter the ladder's step number you seek the texture of :\n");
	scanf("%d",&s);
	
	
	while(b<=s)
	{
		
	while(a<b)
	{
	printf("*");
	a++;
	}
	b++;
	a=0;
	printf("\n");
	}
	
	
	
	

	return 0;
}


