#include<stdio.h>

int main()
{
    int r,c,sum=0;
    printf("enter the arry's row size:");
    scanf("%d",&r);
    printf("enter the arry's column size :");
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
    printf("enter b element:\n");
    int b[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }

    }
    
    printf("array c is: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          sum=a[i][j]+b[i][j];
          printf("%d ",sum);
        }
         printf(" \n");

    }
   
   
}

   
