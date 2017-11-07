#include <stdio.h>

int main() {
	int x , y;
	printf("Enter a location=");
	scanf("%d %d",&x ,&y);
	
	if(x==0 && y==0)
	printf("it is at the origin!");
	else if(x!=0 && y==0)
	printf("it is at the x-axes");
	else if(x==0 && y!=0)
	printf("it is at the y-axes");
	else if(x>0 && y>0)
	printf("it is in the 1st Quadrant");
	else if(x<0 && y>0)
	printf("it is in the 2nd Quadrant");
	else if(x<0 && y<0)
	printf("it is in the 3rd Quadrant");
	else if(x>0 && y<0)
	printf("it is in the 4th Quadrant");
	
			return 0;
}

