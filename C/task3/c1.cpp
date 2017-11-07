#include <stdio.h>

int main() {

int x,st=0,ss=0;


while(x!=-1){

printf("Enter an integer...");
scanf("%d" ,&x);

st=st+x;
ss++;

}


printf("The sum up is : %d  and average is : %d",st,st/ss);










			return 0;
}


