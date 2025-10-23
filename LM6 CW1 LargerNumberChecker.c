/*A program that takes two numbers as input and prints the larger number*/
#include <stdio.h>

//Function Declaration
int LargerNum (int, int);
int main (void)
{
    //Variable Declaration
    int num1, num2;

    //Function C
    LargerNum (num1,num2);

    return 0;
}


// Function Definition
int LargerNum (int num1, int num2)
{
    //Taking Inputs
    printf("\n Enter 1st Number: ");
    scanf("%d", &num1);
    printf("\n Enter 2nd Number: ");
    scanf("%d", &num2);

    //Checking Condition
    if (num1 > num2)
        printf(" %d is the largest number\n", num1);
    else if (num2 > num1)
        printf(" %d is the largest number\n", num2);
     else
     printf(" \nBoth numbers are equal\n Try again..");

}
