#include<stdio.h>



int main()
{
	int a,b,c;
	

	printf("Enter The Value Of A :");
	scanf("%d",&a);
	printf("Enter The Value Of B :");
	scanf("%d",&b);

	printf("1) Add(+)\n");
	printf("2) Multi(*)\n");
	printf("3) Dev(/)\n");
	printf("4) Minus(-)\n");
	printf("5) Modulas(%)\n");
	printf("Enter Choice: ");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
		      printf("Your Valu Is : %d\n",a+b);
		      break;

		case 2:
		      printf("Your Valu Is : %d\n",a*b);
		      break;

		case 3:
		      printf("Your Valu Is : %d\n",a/b);
		      break;

		case 4:
		      printf("Your Valu Is : %d\n",a-b);
		      break;

		case 5:
		      printf("Your Valu Is : %d\n",a%b);
		      break;

		default:
		      printf("Invalid Input !! \n ");
	}

	
}