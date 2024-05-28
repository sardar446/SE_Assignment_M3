#include <stdio.h>

void VowelsConsonants(char *str);
main() 
{
	
    /* 8. Write a program in C to count the total number of vowels or consonants in a string. */
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    VowelsConsonants(str);
}

void VowelsConsonants(char *str) {
    int vowels = 0, consonants = 0;
    
    while(*str != '\0') {
        char c = *str;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            consonants++;
        }
        str++;
    }
    
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);
}

