#include <stdio.h>
int main()
{
	int yas;
	printf("yasinizi girerseniz cok denisikli seyler olabilir...");
	scanf( "%d" ,&yas);
	
	if(yas<=0)
	printf("bu terslikte bir is var");
	else if (yas>50)
	printf("yaslisin hocam :// senede bir check-up yaptirtmayi unutma");
	else if(yas==50)
	printf("50 yolun yarisi");
	else if(0<yas<50)
	printf("gencsin yigidim hayat sana guzel");

	
	
	
	
	
	
	
	return 0;
}
