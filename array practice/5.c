#include<stdio.h>
main()
{
    int n,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    int i,j;
    int tmp;
    for(i=0; i<n; i++)
    {

        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[j]==a[i])
            {
                x++;
                break ;
            }
        }
    }
    printf("duplicate element is : %d",x);

}