#include<stdio.h>

int main()
{
    int choice ;
    printf("1.+\n");
    printf("2.-\n");
    printf("3.*\n");
    printf("4./\n");
    printf("enter your choice:\n");
    scanf("%d",& choice);

    int a,b;
    printf("enter the value of a nad b:");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
    case 1:
        printf("%d+%d=%d",a,b,a+b);
        break ;
    case 2:
        printf("%d-%d=%d",a,b,a-b);
        break ;
    case 3:
        printf("%d*%d=%d",a,b,a*b);
        break ;
    case 4:
        printf("%d/%d=%d",a,b,a/b);
        break ;
    default:
        printf("enter valid input");
    }
}