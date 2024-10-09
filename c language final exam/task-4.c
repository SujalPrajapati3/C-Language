#include<conio.h>

int main()
{
	int a;

	printf("Enter Your Persentage : ");
	scanf("%d",&a);

	if(a>90 && a<=100)
	{
		printf("Your Grade Is = A");
	}

	else if(a>80 && a<=90)
	{
		printf("Your Grade Is = B ");
	}

	else if(a>70 && a<=80)
	{
		printf("Your Grade Is = C ");
	}

	else if(a>60 && a<=70)
	{
		printf("Your Grade Is = D ");
	}

	else if(a>40 && a<=60)
	{
		printf("Your Grade Is = E ");
	}
	else
	{
		printf("fail");
	}


}