#include <stdio.h>
void extractSubstring(char *source, char *substring, int start, int length);
int main() {
    char source[100], substring[100];
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    printf("Enter starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter length of the substring: ");
    scanf("%d", &length);

    extractSubstring(source, substring, start, length);

    printf("Substring: %s\n", substring);
}

void extractSubstring(char *source, char *substring, int start, int length) {
    int i;
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        substring[i] = source[start + i];
    }
    substring[i] = '\0'; // Add null terminator to the end of substring
}
