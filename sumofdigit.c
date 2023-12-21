#include<stdio.h>
void main()
{
    int n, s = 0, r;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n); // n = 123

    // Loop to sum the digits of the number
    while (n > 0)
    {
        r = n % 10; // Extract the last digit, e.g., 123 % 10 = 3, 12 % 10 = 2, 1 % 10 = 1
        s = s + r;  // Sum the digit, e.g., 0 + 3 = 3, 3 + 2 = 5, 5 + 1 = 6 (final result)
        n = n / 10; // Remove the last digit, e.g., 123 / 10 = 12, 12 / 10 = 1, 1 / 10 = 0
    }

    // Display the sum of the digits
    printf("The sum of the digits is %d", s);

    return 0;
}

/*
Output:
Enter a number: 345
The sum of the digits is 12
*/

