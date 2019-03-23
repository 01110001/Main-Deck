#include <stdio.h>

int main() {

int s,a=2;
printf("Type in order to see whether the number is prime or not!\n");
scanf("%d",&s);

if(s<0)
printf("Lemme tell you there is no any negative prime number.");
if(s<2 && s>=0)
printf("It is not a prime number.");

while(s%a!=0)
{
++a;


}

if(a==s)
printf("It is a prime number.");

else if(a<s && s>=2)
printf("It is not a prime number.");













			return 0;
}


