#include <stdio.h>

int main(){
	
	int upperx,uppery,botx,boty;
	
	printf("Enter the coordinates for upper left(x y):");
	scanf("%d %d",&upperx,&uppery);
	
	printf("Enter the coordinates for bottom right(x y):");
	scanf("%d %d",&botx,&boty);
	
	printf("Area is:%d",(uppery-boty)*(botx-upperx));
	
	
	return 0;
}

