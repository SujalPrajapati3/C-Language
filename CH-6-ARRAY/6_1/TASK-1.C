#include<stdio.h>

int main()
{
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("length of an array:%d",n);  
}