#include<stdio.h>

main()
{
//print nto1 using do while loop
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d ",n);
        n--;
    } while (n>=1);
}