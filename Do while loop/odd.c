#include<stdio.h>

main()
{
//print odd numbers using do while loop
    int n,i=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i+=2;
    } while (n>=i);
}