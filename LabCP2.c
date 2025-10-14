/*A program that calculates the area of a rectangle by taking width and length as inputs*/
#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b);     // Function Call

int main (void)
{

    double a, b, result;                      //Defining Variables

    printf("Enter the value of a and b: ");   //Taking Inputs
    scanf("%lf%lf", &a, &b);

    result = calculateArea(a,b);             //Operation
    
    
    printf("Area: %.3f", result);            //Result

    return 0;
}


double calculateArea(double a, double b)     //Function Define
{

    double area = a * b;
    return area;
}
