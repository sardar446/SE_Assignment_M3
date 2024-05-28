/* 15. Write a program in C to find the largest and smallest words in a string.*/
#include <stdio.h>
#include <string.h>

void find_Large_Small_Words(char *str, char *large, char *small) 
{
    int i, j, len, ml = 0, mil = strlen(str), si = 0, ei = 0;

    for (i = 0; str[i] != '\0'; i++) {
       
        if (str[i] ==' ' || str[i+1]=='\0') {
            len = i - si + (str[i+1] == '\0' ? 1 : 0); // Including the null terminator if it's the end of the string

            if (len > ml) {
                ml = len;
                ei = i;
            }
            if (len < mil) {
                mil = len;
                si = i + 1;
            }
        }
    }

    for (i = 0, j = si; j <= ei; i++, j++) {
        large[i] = str[j];
    }
    large[i] = '\0';
    
    si = 0;
    ei = 0;

   
    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ' || str[i+1] == '\0') {
            len = i - si + (str[i+1] == '\0' ? 1 : 0); // Including the null terminator if it's the end of the string

            if (len < mil) {
                mil = len;
                ei = i;
            }
            if (len > ml) {
                ml = len;
                si = i + 1;
            }
        }
    }

    // Copy the smallest word from the string
    for (i = 0, j = si; j <= ei; i++, j++) {
        small[i] = str[j];
    }
    small[i] = '\0';
}

main() 
{

    char str[1000],large[100], small[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing trailing newline character
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    find_Large_Small_Words(str, large, small);

    printf("\n\n Largest word: %s", large);
    printf("\n\n Smallest word: %s", small);
}


