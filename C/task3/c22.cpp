#include <stdio.h>

int main() {

int b=1,x,s=0;

    printf("Enter the one that you wanna be turned into binary style!11! : ");
	scanf("%d",&x);
	
   
while(x>0)
{   
    
    s=s+x%2*b;
	b=b*10;
	x=x/2;
	
	
}


printf("Here binary comes! : %d",s);









			return 0;
}


