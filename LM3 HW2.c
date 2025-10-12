/*A program that takes two integers from the user and prints their sum, difference,
product, and quotient */
#include <stdio.h>

int main (void)
{
    //Defining Variables
    int num1, num2, sum, diff, prod;
    float quot;
    
    //Taking Inputs
    printf("Enter two Integers:  ");
    scanf("%d%d", &num1, &num2);

    //Computation
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = (float)num1 / (float)num2;

    //Result
    printf("\n Sum: %d \n Difference: %d \n Product: %d \n Quotient: %.3f \n", sum, diff, prod, quot);

    return 0 ;
}
