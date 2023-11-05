#include<stdio.h>
main()
{
	int x,y,ans;
	printf("enter the value of x and y:");
	scanf("%d%d",&x,&y);
	
	ans=(x*x)+(2*x*y)+(y*y);
	printf("ans is:%d",ans);
}
