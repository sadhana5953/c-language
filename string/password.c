#include<stdio.h>
main()
{
	char a[32];
	s:
	printf("enter your password :");
	gets(a);

	int length=strlen(a);
	
	int i,check=0;
	
	if(length>=8&&length<=32)
	{
		for(i=0;i<length;i++)
	{
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
		{
			check=1;
		}
	}
	if(check==1)
	{
		check=0;
		
		for(i=0;i<length;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			check=1;
		}
	}
	if(check==1)
	{
		check=0;
		
		for(i=0;i<length;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			check=1;
		}
	}
	if(check==1)
	{
		check=0;
		
		for(i=0;i<length;i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			check=1;
		}
	}
	if(check==1)
	{
		check=0;
		
		for(i=0;i<length;i++)
	{
		if(a[i]>=33&&a[i]<=47||a[i]>=58&&a[i]<=64)
		{
			check=1;
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
		printf("your password is correct .");
	}
	else
	{
		printf("error : space is not allow !\n\n");
		goto s;
	}
	}
	else
	{
		printf("error : atleast one character should be special character !\n\n");
		goto s;
	}
	}	
	else
	{
		printf("error : atleast one character should be digit !\n\n");
		goto s;
	}
	}
	else
	{
		printf("error : atleast one character should be small letter !\n\n");
		goto s;
	}
	}
	else
	{
		printf("error : atleast one character should be capital letter !\n\n");
		goto s;
	}
	}
	else
	{
		printf("error : enter the name !\n\n");
		goto s;
	}
	}
	else
	{
		printf("error : enter minimum 8 and maximum 32 character !\n\n");
		goto s;
	}
}
