#include <stdio.h>
void combineStrings(char *str1, char *str2, char *combined) 
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }

    // Add null terminator at the end
    combined[i + j] = '\0';
}
main() 
{
	/* 14 Write a program in C to combine two strings manually*/
    char str1[100], str2[100], combined[200];
    int i;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n')
            str1[i] = '\0';
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n')
            str2[i] = '\0';
        i++;
    }

    // Combine the strings
    combineStrings(str1, str2, combined);

    printf("Combined string: %s\n", combined);
}


