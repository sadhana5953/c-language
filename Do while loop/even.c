#include<stdio.h>

main()
{
//print even numbers using do while loop
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d ",n);
        n-=2;
    } while (n>=1);
}