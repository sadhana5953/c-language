#include<stdio.h>
main()
{
	int u,v,i;
	printf("enter the value of array 1:");
	scanf("%d",&u);
	printf("enter the value of array 2:");
	scanf("%d",&v);
	int x=u;
	int a[u],b[v],c[u+v];
	
	for(i=0;i<u;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<v;i++)
	{
		printf("enter the value of b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<u;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<v;i++)
	{
		c[x]=b[i];
		x++;
	}
	for(i=0;i<u+v;i++)
	{
		printf("%d ",c[i]);
	}
}