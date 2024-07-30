#include<stdio.h>

int main()
{
    int r,c,sum=0,n;
    printf("enter the arry's row size:");
    scanf("%d",&r);
    printf("enter the arry's column size :");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);

            sum=sum+a[i][j];

        }

    }
    n=r*c;
    printf("avrege of an array:%.2f",(float)sum/n);
}