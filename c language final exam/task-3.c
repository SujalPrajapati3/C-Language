#include <stdio.h>

int main()
{

    int r;
    printf("enter row and column:");
    scanf("%d",&r);
    
    int i, j;
    int a[r][r];
    printf("Enter A Elements: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter B Elements : \n");
    int b[r][r];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int c[r][r];
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of Two Matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
}