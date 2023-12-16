//WRITE A PROGRAM IN C TO PRINT THE FACTORS OF A GIVEN NUMBER

#include <stdio.h>

int main() {
    int i, n;

    // Prompt the user to enter a number
    printf("Enter a Number: ");
    
    // Read the input number from the user
    scanf("%d", &n);

    // Print a message indicating the purpose of the program
    printf("The factors of %d are:\n", n);

    // Use a for loop to find and print the factors of the input number
    for (i = 1; i <= n; i++) {
        // Check if i is a factor of n
        if (n % i == 0) {
            // If i is a factor, print it
            printf("%d ", i);
        }
    }

    // Return 0 to indicate successful completion
    return 0;
}
/*
Output:
Enter a Number: 26
The factors of 26 are:
1 2 13 26
*/
