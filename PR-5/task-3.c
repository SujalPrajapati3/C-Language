#include<stdio.h>

int main()
{
    int n;
    printf("Enter the row & column size:");
    scanf("%d",&n);

    int a[n][n],b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             printf("enter a[%d][%d]:",i,j);
             scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             b[i][j]=a[i][j];
             printf("%d",a[j][i]);
        }
        printf("\n");
    }
}