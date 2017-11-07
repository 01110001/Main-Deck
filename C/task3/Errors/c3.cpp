#include <stdio.h>

int main() {
int a,b=0;
printf("Cano please enter the longest number you know B|\n");
scanf("%d",&a);


while(a>=1){

b++;
a=a/10;


}
while(a<=-1){
b++;
a=a/10;
}

printf("There are %d digits ,kips",b);




			return 0;
}


