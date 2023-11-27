#include<stdio.h>
main()
{
	//sum of prime number
	
	int n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	
	int j,i,a=0;
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
	printf("\nsum is:%d",sum);
	
}