#include<stdio.h>
main()
{
    int n,c=0;
   
    printf("Enter the number :");
    scanf("%d",&n);
    while(n !=0 ){
        n = n/10;
        c++;
    }
    printf("Total number of digits : %d\n",c);



}