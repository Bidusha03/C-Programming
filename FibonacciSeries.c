#include <stdio.h>

int main() {
    int first = 0, second = 1, r, i = 1, n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display the first two terms without a comma
    printf("%d, %d", first, second);

    // Generate and display the Fibonacci sequence
    while (i <= n - 2) {
        r = first + second;
        printf(", %d", r); // Separate numbers with commas
        first = second;    // Swapping
        second = r;
        i = i + 1;
    }

    return 0;
}
/*
Output :
Enter a number: 9
0, 1, 1, 2, 3, 5, 8, 13, 21
*/
