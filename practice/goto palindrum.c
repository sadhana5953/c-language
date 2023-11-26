#include<stdio.h>

int main()
{
    //palindrum number without using loop
    int n,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    int o=n;

x:
    if(n!=0)
    {
        int n1=n%10;
        r=r*10+n1;
        n=n/10;

        goto x;
    }

    if(o==r)
    {
        printf("number is palindrum");
    }
    else
    {
        printf("number is not palindrum");
    }
}