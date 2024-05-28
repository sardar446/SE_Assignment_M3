#include<stdio.h>
main()
{
	/* 11.Write a program in C to read a sentence and replace lowercase characters with
	uppercase and vice versa.*/
	
	char str[100], upr, c;
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);

	printf("\n\n\t Enter 'U' or 'L' Replace string charactor to Uper or Lower case : ");
	scanf(" %c",&c);
	
	switch(c)
	{
		case 'U': printf("\n\n\t string in Upper case : %s",strupr(str));
				break; 
		case 'L': printf("\n\n\t string in Upper case : %s",strlwr(str));
				break; 
	}
}
