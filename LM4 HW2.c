/*A program that asks the user for the loan amount, annual interest rate, and
loan tenure, then calculate the monthly EMI*/
#include <stdio.h>
#include <math.h>

int main (void)
{
    //Defining Variables
    int P;
    float r, n, emi;


    //Taking Inputs
    printf("Enter Loan Ammount: ");
    scanf("%d", &P);

    printf("Enter Loan Annual Interest: ");
    scanf("%f", &r);

    printf("Enter Loan Tenure: ");
    scanf("%f", &n);


    //Converting variables
    r  = r/12;
    n  = n * 12;

    //Computation
    emi = (P * r * pow((1 + r), n)) / (pow((1 + r), n) - 1);

    //Result
    printf("Monthly EMI is %f", emi);


    return 0 ;
}
