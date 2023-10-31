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
	
	ans=(x*x*x)-(3*x*x*y)-(3*x*y*y)-(3*x*x*z)+(6*x*y*z)+(3*y*y*z)-(3*y*z*z)+(z*z*z);
	printf("ans is:%d",ans);
}
