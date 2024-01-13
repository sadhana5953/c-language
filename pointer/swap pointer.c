#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
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
	
	swap(a,b);
	
	printf("\nAfter swaping :\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
}
