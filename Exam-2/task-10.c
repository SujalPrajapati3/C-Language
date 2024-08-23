#include<stdio.h>

int main()

{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            (j%2==1)
                ?printf("0")
                :printf("1");
        }
        printf("\n");
    }
}