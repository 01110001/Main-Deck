#include <stdio.h>
#include <stdint.h>


int main() {
 long int b;
 int a;
printf("Cano please enter the longest number you know B|\n");
scanf("%ld",&a);

while(a>=1){

b++;
a=a/10;


}
while(a<=-1){
b++;
a=a/10;
}

printf("There are %lld digits ,kips",b);




			return 0;
}


