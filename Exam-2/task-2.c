#include<stdio.h>

int main()
{
    int r,c,l=0;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           
            if(a[i][j]>l)
            {
                l=a[i][j];
            }  
        }
    }
    printf("largest: %d",l);
    


}