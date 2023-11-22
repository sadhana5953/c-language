#include<stdio.h>

main()
{
//print even numbers using do while loop
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    do
    {
        if(n%2==0)
        {
            printf("%d ",n);
        }
    } while (n>=1);
