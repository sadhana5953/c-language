#include<stdio.h>

main()
{
    int n,r;
    printf(" enter the value of n:");
    scanf("%d",&n);
    while (n!=0)
    {
        int n1=n%10;
        r=r*10+n1;
        n=n/10;
    }
    printf("reverse number:%d",r);
}