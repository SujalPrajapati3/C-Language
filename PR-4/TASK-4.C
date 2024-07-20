#include<stdio.h>

int main()
{
    int space=0;
    for(int i=1;i<=5;i++)
    {
        for(int s=1;s<=space;s++)
        {
            printf("  ");
        }
        space++;
        for(int j=5;j>=i;j--)
        {
           (j%2==0)
                ?printf("0 ")
                :printf("1 ");     
        }
        printf("\n"); 
           
    }
        
}