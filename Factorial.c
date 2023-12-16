//WRITE A PROGRAM IN C TO PRINT THE FACTORIAL OF A GIVEN NUMBER.

#include <stdio.h>

int main() {
    int fact = 1, n, i;

    // Prompt the user to enter a number
    printf("ENTER A NUMBER: ");
    
    // Read the input number from the user
    scanf("%d", &n);

    // Use a for loop to calculate the factorial of the input number
    for (i = 1; i <= n; i++) {
        // Multiply the current factorial by the loop variable
        fact = fact * i;
    }

    // Print the factorial of the entered number
    printf("The factorial is: %d\n", fact);

    // Return 0 to indicate successful completion
    return 0;
}

/*
Output :
ENTER A NUMBER: 5
The factorial is: 120
*/
