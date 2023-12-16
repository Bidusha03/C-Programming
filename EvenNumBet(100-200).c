//WRITE A PROGRAM IN C TO PRINT THE EVEN NUMBERS BETWEEN 100 TO 200.

#include <stdio.h>

int main() {
    int i;

    // Print a message indicating the purpose of the program
    printf("The even numbers between 100 to 200 are:\n");

    // Use a for loop to iterate from 100 to 300
    for (i = 100; i <= 200; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            // If even, print the current number
            printf("%d ", i);
        }
    }

    // Return 0 to indicate successful completion
    return 0;
}

/* Output : 
The even numbers between 100 to 200 are:
100 102 104 106 108 110 112 114 116 118 120 122 124 126 128 130 132 134 136 138 140 142 144 146 148 150 152 
154 156 158 160 162 164 166 168 170 172 174 176 178 180 182 184 186 188 190 192 194 196 198 200
*/

