#include<stdio.h>
main()
{
//	3. Count No. of digits, alphabets & and special characters.
    char a[50];
    printf("enter your name:");
    scanf("%s",&a);
    
    int i,d=0,x=0,c=0,length;
    for(i=0;a[i]!=0;i++)
    {
    	length++;
	}
    for(i=0;i<length;i++)
    {
    	if(a[i]>=48&&a[i]<=57)
    	{
    		d++;
		}
		else if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
		{
			x++;
		}
		else if(a[i]>=33&&a[i]<=47||a[i]>=58&&a[i]<=64)
		{
			c++;
		}
	}
	printf("Digit:%d\n",d);
	printf("Alphabet:%d\n",x);
	printf("Special characters:%d\n",c);
}
