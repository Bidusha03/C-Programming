//WRITE A PROGRAM IN C TO PRINT THE SUM OF ALL THE EVEN NUMBERS BETWEEN 50 TO 100.

#include <stdio.h>

int main() {
    int i, sum = 0;

    // Print a message indicating the purpose of the program
    printf("The sum of all the even numbers between 50 to 100 is:\n");

    // Use a for loop to iterate from 50 to 100
    for (i = 50; i <= 100; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            // If even, add the current number to the sum
            sum = sum + i;
        }
    }

    // Print the sum of even numbers
    printf("The sum is: %d\n", sum);

    // Return 0 to indicate successful completion
    return 0;
}

/*
Output :
The sum of all the even numbers between 50 to 100 is:
The sum is: 1950
*/
