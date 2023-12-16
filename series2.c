/* 6)WRITE A PROGRAM IN C TO PRINT THE FOLLOWING SERIES:
10,20,30,40,50,.....................UPTO N TERMS. */

#include<stdio.h>

int main() {
    int i = 10, n;

    // Prompt the user to enter a number
    printf("Enter a Number: ");

    // Read the input number from the user
    scanf("%d", &n);

    // Print a message indicating the purpose of the program
    printf("The given series up to %d is:\n", n);

    // Use a while loop to print the series with increments of 10
    while (i <= n) {
        // Print the current value of i followed by a tab character
        printf("%d\t", i);

        // Increment i by 10 for the next iteration
        i = i + 10;
    }

    // Correct the return statement
    return 0;
}

/*
Output :
Enter a Number: 100
The given series up to 100 is:
10      20      30      40      50      60      70      80      90      100
*/

