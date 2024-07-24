#include<stdio.h>

int main()
{
    printf("--------------//sujal//---------------\n");
    int n;

    printf("Enter prodect :");
    scanf("%d",&n);

    int prize[n];
    int total_prize=0;
    int qut[n];
    float gst;
   
    for(int i=0;i<n;i++)
    {
        printf("-----------your product prize---------\n");
        printf("Enter prize %d :",i+1);
        scanf("%d",&prize[i]);
        printf("------------your quntety--------------\n");

        printf("Enter qut %d :",i+1);
        scanf("%d",&qut[i]);
        total_prize+=prize[i]*qut[i];    
    }
    printf("\n----------your total prize------------\n");

    printf("Total prize: %d\n ",total_prize);

    printf("\n------your total prize with gst-------\n");

    gst=total_prize*.18;
    printf("\nTotal prize with gst: %.2f ",gst+total_prize);
    
}