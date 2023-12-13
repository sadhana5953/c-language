#include<stdio.h>
main()
{
	char a[50];
	printf("enter your name:");
	scanf("%s",&a);
	
	int i,j,x=1,length=0;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	int b[length];
	for(i=0;i<length;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
				x++;
			}
		}
		b[i]=x;
		if(b[i]==1)
		{
			printf("%c",a[i]);
		}
		x=1;
	}
	
}
