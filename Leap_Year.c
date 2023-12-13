#include <stdio.h>
int main()
{
    // Declare a variable to store the user input for the year
    int y;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    
    // Read the user input for the year and store it in the variable 'y'
    scanf("%d", &y);

    // Check if the year is divisible by 100
    if (y % 100 == 0) {
        // If the year is divisible by 100, check if it's also divisible by 400
        if (y % 400 == 0) {
            // Print a message if the year is divisible by 400 (leap year)
            printf("It is a leap year\n");
        } 
		else
		 {
            // Print a message if the year is not divisible by 400 (not a leap year)
            printf("It is not a leap year\n");
        }
    } 
	else {
        // If the year is not divisible by 100, check if it's divisible by 4
        if (y % 4 == 0) 
		{
            // Print a message if the year is divisible by 4 (leap year)
            printf("It is a leap year\n");
        }
		 else 
		 {
            // Print a message if the year is not divisible by 4 (not a leap year)
            printf("It is not a leap year\n");
        }
    }

    // Indicate that the program executed successfully
    return 0;
}

/*
Output:
Enter a year: 2004
It is a leap year

Enter a year: 2007
It is not a leap year
*/
