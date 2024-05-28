#include <stdio.h>
#include <string.h>
int countWord(char *str, char *word);
main() 
{
	/* 12. Write a program in C to find the number of times a given word 'is' appears in
	the given string*/
	
    char str[1000], word[] = "is";
    int result;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
//    scanf("%s",&str);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    result = countWord(str, word);
    printf("'%s' appears %d times in the given string.\n", word, result);


}

int countWord(char *str, char *word) {
    int count = 0, wordLen = strlen(word);
    char *ptr = str;

    // Iterate through the string until 'ptr' points to NULL
    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        // Move the pointer forward by the length of the word
        ptr += wordLen;
    }

    return count;
}
//wordLen = strlen(word)
