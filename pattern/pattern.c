#include<stdio.h>
main()
{
	int i,j,k,m=0,l=1;
	for(i=1;i<=10;i++)
	{
		m=i+m;
		l=m;
		for(k=1;k<i;k++)
		{
			printf("-  ");
		}
		for(j=i;j<=10;j++)
		{	
			printf("%d ",l);
			l=l+j;
		}
	    for(j=9;j>=i;j--)
	    {
	    	printf("%d ",l);
	    	l=l+j;
		}
		printf("\n");
	}
	
}
