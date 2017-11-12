#include <stdio.h>

int main(){
	
	float startx,starty,endx,endy;
	
	printf("Enter the startpoinyt(x y):");
	scanf("%f %f",&startx,&starty);
	
	printf("Enter the endpoint(x y):");
	scanf("%f %f",&endx,&endy);
	
	float midx=(endx+startx)/2;
	float midy=(endy+starty)/2;
	
	printf("(%.1f,%.1f)",midx,midy);


	return 0;
}

