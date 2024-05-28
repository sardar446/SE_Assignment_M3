#include<stdio.h>
main()
{
	/* 4. Write a program in C to count the total number of words in a string.*/
	
	char a[100];
	int i, flag=0, c=0;
	
	printf("Enter a string: ");
      scanf("%[^a\n]",&a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]==' '||a[i]=='\n'||a[i]=='\t') 
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			c++;
		}
	}
	printf("\n\n Total Number Of Words In a String : %d",c);
}
