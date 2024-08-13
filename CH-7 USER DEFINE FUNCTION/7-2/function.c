#include<stdio.h>
//ans-1
 int getINT()
 {
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    return n;
 }
 int getArraysum(int a[],int n)
 {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
 }
