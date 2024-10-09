#include<stdio.h>

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("after swaping a=%d and b=%d:",a,b);
}

int main()

{
    int a,b;

    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    swap(a,b);


}