#include <stdio.h>

int main() {
    // Declare variables for loop control and input
    int i, j, n;

    // Get the number of lines from the user
    printf("Enter the number of lines you want to print: ");
    scanf("%d", &n);

    // Outer loop for lines
    for (i = 0; i < n; i++) {
        // Inner loop for printing '*' characters
        for (j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        
        // Move to the next line after each line is printed
        printf("\n");
    }

    // Indicate successful execution
    return 0;
}

/*
Output:

Enter the number of lines you want to print: 5
*
**
***
****
*****

*/
