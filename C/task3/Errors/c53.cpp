#include <stdio.h>

int main() {
int a=1,n;
unsigned long long s=1;

printf("Enter the number that you want me to do some magic on B| \n(factorial)\n");
scanf("%d" ,&n);

while(a!=n+1)
{
	s=a*s;
	a++;
}

printf("Result is : %llu",&s);








			return 0;
}


