#include<stdio.h>
main()
{
	int x,y,z,ans;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	printf("enter the value of z:");
	scanf("%d",&z);
	
	ans=(x*x)+(2*x*y)+(2*x*z)+(y*y)+(2*y*z)+(z*z);
	printf("ans is:%d",ans);
}
