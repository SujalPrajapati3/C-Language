#include<stdio.h>

int main()

{
    
    for(int i=65;i<=69;i++)
    {
        for(int s=1;s<=69-i;s++)
        {
            printf("  ");
        }
        for(int j=i;j>=65;j--)
        {
            printf("%c ",j);
            
        }
        printf("\n");
    }
}