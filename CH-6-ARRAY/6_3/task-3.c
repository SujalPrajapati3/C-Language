#include<stdio.h>

int main()
{
    int r,sum=0,d;
    printf("enter the arry's row & column size:");
    scanf("%d",&r);
   

    printf("enter a element:\n");
    int a[r][r];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                printf("%d",a[i][j]);
                sum=sum+a[i][j];
                
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("the sum of diagonal:%d ",sum);
    
    
   
}
