#include<stdio.h>

int main()
{
    int n;
    printf("Enter the array's size:");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]<0)
       {
            printf("%d",a[i]);
       }
    }
}