#include<stdio.h>

void divisible()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);

    if(a%3==0 && a%5==0)
    {
        printf("the give number is divisibal by both 3&5: ");
    }
    else
    {
        printf("the give number is not divisibal by both 3&5: ");    
    }

}
int main()
{
    divisible();
}
