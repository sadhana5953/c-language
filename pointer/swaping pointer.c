#include<stdio.h>
void swaping(int *a,int *b)
{
	int z;
	z=*a;
	*a=*b;
	*b=z;
}
main()
{
	int x,y;
	printf("enter the value of x : ");
	scanf("%d",&x);
	printf("enter the value of y : ");
	scanf("%d",&y);
	
	printf("Before swaping :\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	
	int *a=&x;
	int *b=&y;
	
	swaping(a,b);
	
	printf("\nAfter swaping :\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
}
