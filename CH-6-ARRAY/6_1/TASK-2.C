#include<stdio.h>

int main()
{
    int n,sum=0;
    
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    
    printf("avreag of an array:%.2f",float(sum/n));  
}