#include<stdio.h>

main()
{
    int sum=0,i=1,n;
    printf(" enter the value of n:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    printf("sum is:%d",sum);
}