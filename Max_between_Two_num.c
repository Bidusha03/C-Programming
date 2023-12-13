#include <stdio.h>
int main() 
{
    // Declare variables to store two numbers
    int a, b;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    
    // Read the user input for the first number and store it in variable 'a'
    scanf("%d", &a);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    
    // Read the user input for the second number and store it in variable 'b'
    scanf("%d", &b);
    
    // Check if the numbers are equal
    if (a == b) 
	{
        // Print a message if the numbers are equal
        printf("Both numbers are equal\n");
    } 
	else if (a > b) 
	{
        // Print a message if the first number is greater
        printf("The first number (%d) is greater than the second number (%d)\n", a, b);
    } 
	else 
	{
        // Print a message if the second number is greater
        printf("The second number (%d) is greater than the first number (%d)\n", b, a);
    }

    // Indicate that the program executed successfully
    return 0;
}

/*
Output:
Enter the first number: 6
Enter the second number: 6
Both numbers are equal

Enter the first number: 9
Enter the second number: 10
The second number (10) is greater than the first number (9)
*/

