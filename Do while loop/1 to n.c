#include<stdio.h>

main()
{
//print 1 to n using do while loop
    int n,i=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i++;
    } while (n>=i);
}