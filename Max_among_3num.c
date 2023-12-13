#include <stdio.h>
int main() 
{
    // Declare variables to store three numbers
    int a, b, c;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    
    // Read the user input for the first number and store it in variable 'a'
    scanf("%d", &a);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    
    // Read the user input for the second number and store it in variable 'b'
    scanf("%d", &b);

    // Prompt the user to enter the third number
    printf("Enter the third number: ");
    
    // Read the user input for the third number and store it in variable 'c'
    scanf("%d", &c);
    
    // Check which number is the maximum
    if (a > b && a > c) 
	{
        // Print a message if the first number is greater
        printf("%d is the maximum\n", a);
    } 
	else if (b > a && b > c)
	 {
        // Print a message if the second number is greater
        printf("%d is the maximum\n", b);
    } 
	else 
	{
        // Print a message if the third number is greater
        printf("%d is the maximum\n", c);
    }

    // Indicate that the program executed successfully
    return 0;
}

/*
Output:

Enter the first number: 7
Enter the second number: 8
Enter the third number: 9
9 is the maximum
*/

