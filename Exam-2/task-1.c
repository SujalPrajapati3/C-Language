#include<stdio.h>

int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);

    (a<0)
        ?printf("negetive")
        :printf("positive");
}