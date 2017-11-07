#include <stdio.h>
#include <stdlib.h>
int main()
{
	int hiz,fhiz;
	
	
	printf("type your speed : ");
	scanf("%d" ,&hiz);
	
	fhiz= abs(hiz);
	

	if(hiz>=80)
	printf("penalty is : %d TL",(hiz-80)*15);
	else if(hiz<=-80)
	printf("penalty is : %d TL",(fhiz-80)*15);
	else if(-80<hiz<80)
	printf("no penalty is charged");
	
	
	
	
	
	return 0;
}
