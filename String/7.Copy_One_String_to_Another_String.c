#include<stdio.h>
void stringCopy(char *source, char *destination);
main()
{
	/* 7. Write a program in C to copy one string to another string. */
	char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    stringCopy(source, destination);

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);
}

void stringCopy(char *source, char *destination) 
{
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Null terminate the destination string
}

