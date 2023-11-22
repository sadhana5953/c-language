#include<stdio.h>

main()
{
//print leap year using do while loop
    int x=2000,y=3000;
    
    do
    {
        printf("%d ",x);
        x+=4;
    } while (x<=y);
}