#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter a row :");
    scanf("%d",&r);
    printf("Enter a column :");
    scanf("%d",&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
           
        }
        printf("\n");
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==1)
            {
                
            }
            printf("%d",a[i][j]);
           
        }
       
    }

}