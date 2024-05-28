#include<stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str), i;
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int isPalindrome(char *str) {
    int length = strlen(str), i;
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}
main()
{
	/* 8. WAP to reverse a string and check that the string is palindrome or not
	Write a program of structure employee that provides the following
	b. Write a program of structure for five employee that
	provides the following information -print and display
	empno, empname, address andage */
	
	 char test_string[100];
	int i;
    printf("Enter a string: ");
    scanf("%s", test_string);
    
    reverseString(test_string);
    printf("\n\n\t Reversed String: %s\n", test_string);
    
    if (isPalindrome(test_string)) {
        printf("\n\n\t The string is a palindrome.\n");
    } else {
        printf("\n\n\t The string is not a palindrome.\n");
    }
	
	
	 struct Employee employees[5] = {
        {101, "John Doe", "123 Main St, City", 30},
        {102, "Jane Smith", "456 Elm St, Town", 35},
        {103, "Alice Johnson", "789 Oak St, Village", 28},
        {104, "Bob Brown", "987 Pine St, Hamlet", 40},
        {105, "Eva Green", "654 Maple St, County", 33}
    };
    
    printf("Employee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i+1);
        printEmployeeInfo(employees[i]);
    }
}

