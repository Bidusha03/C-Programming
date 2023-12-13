#include <stdio.h>

int main() 
{
    // Declare a variable to store the user input
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user input and store it in the variable 'n'
    scanf("%d", &n);
    
    // Check if the number is even
    if (n % 2 == 0) 
	{
        // Print a message if the number is even
        printf("It is an even number\n");
    } 
	else
	{
        // Print a message if the number is odd
        printf("It is an odd number\n");
    }

    // Indicate that the program executed successfully
    return 0;
}


