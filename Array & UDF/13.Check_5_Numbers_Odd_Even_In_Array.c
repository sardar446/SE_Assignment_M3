#include<stdio.h>
main()
{
	/* 13.WAP to accept 5 numbers from user and check entered number is even or odd
	using of array */
	
    int numbers[5], i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check and display whether each entered number is even or odd
    printf("\nResults:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0)
            printf("%d is even.\n", numbers[i]);
        else
            printf("%d is odd.\n", numbers[i]);
    }

}
