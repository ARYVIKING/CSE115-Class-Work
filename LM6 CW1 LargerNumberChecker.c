/*A program that takes two numbers as input and prints the larger number*/
#include <stdio.h>

int main (void)
{

    //Declaring Variables
    int num1, num2 ;

    //Taking Inputs
    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("\nEnter 2nd Number: ");
    scanf("%d", &num2);

    //Checking Condition
    if (num1 > num2)
    {
        printf("\nThe Larger Number is %d\n", num1);
    }
    else if (num1 < num2)
    {
        printf("\nThe Larger Number is %d\n", num2);
    }
    else
    {
        printf("Both Numbers are Equal\n Try again..\n");
    }
    
    return 0 ;
}
