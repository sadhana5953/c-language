#include<stdio.h>
main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];

    int i;
    for(i=0; i<n; i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int second_max=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>second_max&&a[i]<max)
        {
            second_max=a[i];
        }
    }
    printf("max:%d\n",max);
    printf("second max:%d", second_max);

}
