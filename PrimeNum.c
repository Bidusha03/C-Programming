//1)WRITE A PROGRAM IN C TO CHECK WHETHER A NUMBER IS PRIME OR NOT

#include <stdio.h>

int main() {
    int i, num, p = 0;

    // Prompt the user to enter a number
    printf("Please enter a number to check prime or not: ");
    
    // Read the input number from the user
    scanf("%d", &num);

    // Use a for loop to check the number for prime
    for (i = 1; i <= num; i++) {
        // Check if i is a factor of num
        if (num % i == 0) {
            p++; // Increment the prime factor count
        }
    }

    // Check if the number of factors is 2 (prime) or not
    if (p == 2) {
        printf("\n%d is a prime number.", num);
    } else {
        printf("\n%d is not a prime number.", num);
    }

    // Return 0 to indicate successful completion
    return 0;
}

/*
Output :
Please enter a number to check prime or not: 11
11 is a prime number.

Please enter a number to check prime or not: 12
12 is not a prime number.

*/


