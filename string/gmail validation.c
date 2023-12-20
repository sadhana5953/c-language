#include<stdio.h>
main()
{
	char a[50];
	s:
	printf("enter gmail-id :");
	gets(a);
	int length=strlen(a);
	
	int i,j,x=0,check=1;
	char b[10]="@gmail.com";
	
	for(i=0;i<length;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			check=0;
		}
	}
	if(check==1)
	{
		check=1;
				
				for(i=0;i<length;i++)
				{
					if(a[i]==' ')
					{
						check=0;
					}
				}
				if(check==1)
				{
					check=0;
		
		for(i=0;i<length;i++)
	{
		if(a[i]=='@')
		{
			check=1;
			j=i;
		}
	}
	if(check==1)
	{
	    check=0;
		
		for(j;b[x]!=0;j++)
		{
			if(a[j]==b[x])
			{
				check++;
			}
			x++;
		}
		if(check==10)
		{
			check=0;
			x=0;
			for(j=length-10;b[x]!=0;j++)
			{
				if(a[j]==b[x])
				{
					check++;
				}
				x++;
			}
			if(check==10)
			{
				printf("your gmail-id created successfully .");
			}
			else
			{
				printf("error : enter the @gamil.com in last !\n\n");
				goto s;
			}
		}
		else
		{
			printf("error : enter the @gamil.com together !\n\n");
			goto s;
			}	
	}
	else
	{
		printf("error : enter the @ !\n\n");
		goto s;
	}
				}
				else
				{
					printf("error : space is not allow !\n\n");
					goto s;
				}
	}
	else
	{
		printf("error : all character should be small !\n\n");
		goto s;
	}
}
