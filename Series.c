/*WRITE A PROGRAM IN C TO PRINT THE FOLLOWING SERIES:
1,2,3,4,5,.....................UPTO N TERMS.*/

#include <stdio.h>

int main() {
    int i, n;

    // Prompt the user to enter a number
    printf("Enter a Number : ");
    
    // Read the input number from the user
    scanf("%d", &n);

    // Print a message indicating the purpose of the program
    printf("The given series up to %d is:\n", n);

    // Use a for loop to print the series up to the input number
    for (i = 1; i <= n; i++) {
        // Print the current value of i followed by a tab character
        printf("%d\t", i);
    }

    // Return 0 to indicate successful completion
    return 0;
}

/* Output :
Enter a Number : 10
The given series up to 10 is:
1       2       3       4       5       6       7       8       9       10
*/

