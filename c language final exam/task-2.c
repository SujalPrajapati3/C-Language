#include<stdio.h>

int main()

{
    float c,f;

    printf("enter celsius:");
    scanf("%d",&c);

    f=(c*9/5)+32;

    printf("celsius to fehrnhit:%.2f",f);
}