#include <stdio.h>

int main() {

int a=0;
printf("Please enter the number which you seek the reverse of...\n");
scanf("%d" ,&a);

while(a!=0){


printf("%d" ,a%10);
a=a/10;


}








			return 0;
}


