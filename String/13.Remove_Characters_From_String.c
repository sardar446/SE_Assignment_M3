#include<stdio.h>
void removeNonAlphabets(char *str);
main()
{
	/* 13.Write a program in C to remove characters from a string except alphabets.*/
	
	char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove non-alphabet characters
    removeNonAlphabets(str);
    
    printf("\n\n After Remove Non-Alphabet Charatore : %s", str);
    
}

void removeNonAlphabets(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            // If yes, keep it and move to the next position
            str[j++] = str[i];
        }
    }
    // Add null terminator at the end
    str[j] = '\0';
}
