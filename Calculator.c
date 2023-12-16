#include<stdio.h>
int main()
{
int a,b,num,sum,diff,multipl,div;
printf("Enter the values of two numbers: ");
scanf("%d %d",&a,&b);
printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
printf("Enter your Choice : ");
scanf("%d",&num);
switch(num)
{
case 1 :
sum = a+b;
printf("Sum of %d and %d is : %d",a,b,sum);
break;
case 2 :
diff = a-b;
printf("Difference of %d and %d is : %d",a,b,diff);
break;
case 3 :
multipl = a*b;
printf("Multiplication of %d and %d is : %d",a,b,multipl);
break;
case 4 :
div = a/b;
printf("Division of %d and %d is : %d",a,b,div);
break;
default :
printf("Wrong choice");
break;
}
return 0;
}

/*
Output :
Enter the values of two numbers: 25 5
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division
Enter your Choice : 1
Sum of 25 and 5 is : 30

Enter the values of two numbers: 25 5
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division
Enter your Choice : 2
Difference of 25 and 5 is : 20

Enter the values of two numbers: 25 5
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division
Enter your Choice : 3
Multiplication of 25 and 5 is : 125

Enter the values of two numbers: 24 6
 1.Addition
 2.Subtraction
 3.Multiplication
 4.Division
Enter your Choice : 4
Division of 24 and 6 is : 4

*/
