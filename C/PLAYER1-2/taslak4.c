#include <stdio.h>

int main() {
	int a1,a2,a3,b1,b2,b3;
	
	int af=0 , bf=0;
	printf("Please type the first player's scores...");
	scanf("%d %d %d" ,&a1,&a2,&a3);
	
	printf("Please type the second player's scores...");
	scanf("%d %d %d" ,&b1,&b2,&b3);
	
	if(a1>b1)
	af=af+1;
	else if(a1<b1)
	bf=bf+1;
	
	if(a2>b2)
	af=af+1;
	else if(a2<b2)
	bf=bf+1;
	
	if(a3>b3)
	af=af+1;
	else if(a3<b3)
	bf=bf+1;
	
	
	printf("Player 1 %d - %d Player 2" ,af,bf);
	
	
	
	
	
			return 0;
}

