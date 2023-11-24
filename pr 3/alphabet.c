#include<stdio.h>
main()
{
	//Write C program to print all alphabets from a to z. using do while loop.
	char i='a',j='z';
	do
	{
		printf("%c ",i);
		i++;
	}while(i<=j);
}