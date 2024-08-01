#include<stdio.h>

int main()
{
    int r,c,sum=0,sum1=0;
    printf("Enter the row's array:");
    scanf("%d",&r);
    printf("Enter the column's array:");
    scanf("%d",&c);


    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             printf("enter a[%d][%d]:",i,j);
             scanf("%d",&a[i][j]);
        }
       
    }
    int r1;
    printf("Enter the row number:");
    scanf("%d",&r1);
    for(int j=0;j<c;j++)
    {
        printf("%d",a[r1][j]);
        sum=sum+a[r1][j];    
    }
    printf("\nthe sum of row %d:%d",r1,sum);

    int c1;
    printf("\nEnter the column number:");
    scanf("%d",&c1);
    for(int i=0;i<r;i++)
    {
        printf("%d",a[i][c1]);
        sum1=sum1+a[i][c1];    
    }
    printf("\nthe sum of row %d:%d",c1,sum1);   
}