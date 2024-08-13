#include<stdio.h>
#define P printf

int main()
{
	int a,b,c;
	

	P("Enter The Value Of A :");
	scanf("%d",&a);
	P("Enter The Value Of B :");
	scanf("%d",&b);

	P("1) Add(+)\n");
	P("2) Multi(*)\n");
	P("3) Dev(/)\n");
	P("4) Minus(-)\n");
	P("5) Modulas(%)\n");
	P("Enter Choice: ");
	scanf("%d",&c);

    void sum()
    {
        printf("your value :%d",a+b);
    }
    void multi()
    {
        printf("your value :%d",a*b);
    }
    void dev()
    {
        printf("your value :%d",a/b);
    }
    void minus()
    {
        printf("your value :%d",a-b);
    }
    void modulas()
    {
        printf("your value :%d",a%b);
    }


	switch(c)
	{
		case 1:
		      sum();
		      break;

		case 2:
		      multi();
		      break;

		case 3:
		      dev();
		      break;

		case 4:
		      minus();
		      break;

		case 5:
		      modulas();
		      break;

		default:
		      P("Invalid Input !! \n ");
	}

}