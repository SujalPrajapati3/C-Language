#include "function.c"

int main()
{
    
    int result;
    int a = getIntA();
    int b = getIntB();
    tmp:
    printf("\n1) sum:\n");
    printf("2) sub:\n");
    printf("3) multi:\n");
    printf("4) div:\n");
    printf("5) mod:\n");
    printf("0) exiting....");
        
    printf("\n");
    int c=getchoice();
        
    
        switch(c)
        {
        case 1 :
            printf("\n");
            result=sum(a,b);
            printf("%d",result);
            goto tmp;
        case 2:
            result=sub(a,b);
            printf("%d",result);;
            goto tmp;
        case 3:
            result=multi(a,b);
            printf("%d",result);
            goto tmp;
        case 4:
            printf("\n");
            result=div(a,b);
            printf("%d",result);
            goto tmp;
        case 5:
            printf("\n");
            result=mod(a,b);
            printf("%d",result);
            goto tmp;
        
        case 0:
            printf("\n");
            printf("Exiting......");
            break;
        
        default:
            printf("\n");
            printf("invelid number......");
            goto tmp;
        }
    
}
