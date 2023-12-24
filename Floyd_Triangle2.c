#include<stdio.h>

int main()
{
    // Declare variables for loop control and input
    int i, j, n;

    // Get the number of terms from the user
    printf("Enter the term : ");
    scanf("%d", &n);

    // Outer loop for lines, starting from n and decrementing
    for (i = n; i > 0; i--) {
        // Inner loop for printing '*' characters, decreasing from i to 1
        for (j = 0; j < i; j++) {
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
Enter the term : 5
*****
****
***
**
*

*/

