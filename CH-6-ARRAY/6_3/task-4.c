#include<stdio.h>

int main()
{
    int r,sum=0,d,c;
    printf("enter the arry's row size:");
    scanf("%d",&r);
    printf("enter the arry's  column size:");
    scanf("%d",&c);
   

    printf("enter a element:\n");
    int a[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||j==0||i==r-1||j==c-1)
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
    printf("the sum of boundray:%d ",sum);
    
    
   
}
