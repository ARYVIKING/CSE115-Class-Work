/*Simple Calculator */
#include <stdio.h>

//Function Declaration
double Calc(double num1, double num2 , char op);
int main (void)
{
    //Declaring Variables
    double num1, num2, result;
    char op;

    //Taking Inputs
    printf("Enter 1st Number: ");
    scanf("%lf", &num1);

    printf("\nEnter Operator: ");
    scanf(" %c", &op);

    printf("\nEnter 2nd Number: ");
    scanf("%lf", &num2);


    //Function Call
    result = Calc(num1, num2, op);

    //Result
    printf("\nResult is %.3f\n", result);

    return 0 ;
}


//Function Definition
double Calc(double num1, double num2 , char op)
{
    double res;

    switch(op)
    {
        case '+':
        res = num1 + num2;
        break;

        case '-':
        res = num1 - num2;
        break;

        case '*':
        res = num1 * num2;
        break;

        case '/':
            if(num2 != 0)
        res = num1 /
         num2;

        else
        {
            printf("\nInvalid Denominator\n");
        }
        break;

        default:
            printf(" \nInvalid Number or Operator \n Try Again\n");

    }
    return res ;
}
