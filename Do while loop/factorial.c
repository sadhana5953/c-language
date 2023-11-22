#include<stdio.h>

main()
{
    int sum=1,n;
    printf(" enter the value of n:");
    scanf("%d",&n);
    do
    {
        sum=sum*n;
        n--;
    } while (1<=n);
    printf("sum is:%d",sum);
}