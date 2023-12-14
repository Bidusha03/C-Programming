/*WRITE A PROGRAM IN C TO TAKE THE MARKS OF 5
SUBJECTS AS INPUT AND PRINT THEIR TOTAL AND
AVERAGE AND PRINT GRADES AS PER THE FOLLOWING
CONDITIONS : -

AVERAGE GRADE
i) AVG>=90 O
ii) AVG>=80 E
iii) AVG>=70 A
iv) AVG>=60 B
v) AVG>=50 C
vi) AVG>=40 D
vii) AVG<40 F 
*/
#include<stdio.h>
int main() 
{
    // Declare variables to store marks, sum, and average
    int a, b, c, d, e, sum;
    float avg;
    
    // Input marks from the user
    printf("Enter the marks of the 5 subjects ==> ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    // Calculate the sum of marks
    sum = a + b + c + d + e;
    
    // Print the aggregate marks
    printf("The Aggregate marks is ==> %d\n", sum);

    // Calculate the average marks
    avg = sum / 5.0;
    
    // Print the average marks
    printf("The average of the marks of those subjects is ==> %f\n", avg);

    // Determine and print the grade based on average marks
    if (avg >= 90) {
        printf("The Grade is 'O'\n");  // Outstanding
    }else if (avg >= 80){
        printf("The Grade is 'E'\n");  // Excellent
    } else if (avg >= 70) {
        printf("The Grade is 'A'\n");  // Very Good
    } else if (avg >= 60) {
        printf("The Grade is 'B'\n");  // Good
    } else if (avg >= 50) {
        printf("The Grade is 'C'\n");  // Satisfactory
    } else if (avg >= 40) {
        printf("The Grade is 'D'\n");  // Pass
    } else {
        printf("The Grade is 'F'\n");  // Fail
    }

    return 0;
}

/*
Output:

Enter the marks of the 5 subjects ==> 45 65 70 78 90
The Aggregate marks is ==> 348
The average of the marks of those subjects is ==> 69.599998
The Grade is 'B'
*/

