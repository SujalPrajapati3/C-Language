#include<stdio.h>

void multiplication()
{
    int a,b;
    
    printf("enter b:");
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
        printf("%d*%d=%d\n",a,b,b*a);    
    }

}