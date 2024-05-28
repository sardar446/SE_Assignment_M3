#include<stdio.h>
main()
{
	/* 2. Write a program in C to separate individual characters from a string. */
	char str[50];
	int i;

    printf("Enter a string: ");
    scanf("%[^s\n]", str);

    // Separating and printing individual characters
    printf("\nIndividual characters........ \n");
    for (i = 0; str[i] != '\0'; i++) 
    {
        printf(" %c",str[i]);
    }
	
}
