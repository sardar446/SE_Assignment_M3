#include<stdio.h>
int stringLength(char *str) 
{
    int length = 0;
    while (*str != '\0') 
    {
        length++;
        str++;
    }
    return length;
}
main() 
{
    /* 1. Write a program in C to find the length of a string without using library functions. */
    char str[50];
    
    printf("Enter a string: ");
    scanf("%[^s\n]", str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
}




//#include <stdio.h>
//
//int stringLength(char *str) {
//    int length = 0;
//    while (str[length] != '\0') {
//        length++;
//    }
//    return length;
//}
//
//int main() {
//    char str[] = "Hello, World!";
//    int length = stringLength(str);
//    printf("Length of the string: %d\n", length);
//    return 0;
//}

