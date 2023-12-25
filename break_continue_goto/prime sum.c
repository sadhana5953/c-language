#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int i,j,sum=0,a=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		{
			a++;
		}
		}
		if(a==2)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		a=0;
	}
	printf("\nsum:%d",sum);
}