#include<stdio.h>
main()
{
	/* 35. .Accept the input month number and print number of days in that
month. */

	int M;
	printf("\n\n\t Enter a Month Number : ");
	scanf("%d",&M);
	
	if(M>=1 && M<=12)
	{
		if(M==2)
		{
			printf("\n\n\t 28/29 Days in this Month");
		}
		else if(M%2!=0 && M<=7)
		{
			printf("\n\n\t 31 Days in this Month");
		}
		else if(M%2!=0 && M>=7)
		{
			printf("\n\n\t 30 Days in this Month");
		}
		else if(M%2==0 && M<=7)
		{
			printf("\n\n\t 30 Days in this Month");
		}
		else if (M%2==0 && M>7)
		{
		printf("\n\n\t 31 Days in this Month");
		}
	}
	else
	{
			printf("\n\n\t Invalide Input Try again......");
	}
}
