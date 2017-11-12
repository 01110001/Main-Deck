#include <stdio.h>

int main() {
int a;
int s=1;

printf("Enter the number that you want me to do some magic on B| \n(factorial)\n");
scanf("%d" ,&a);

while(a!=0)
{
	s=a*s;
	a=a-1;
}

printf("Result is : %d",&s);








			return 0;
}


