/*A program that calculates the area of a rectangle by taking width and length as inputs*/
#include <stdio.h>
#include <math.h>

 // Function Call
double calculateArea(double a, double b);    

int main (void)
{

    //Declaring Variables
    double a, b, result;                    

    //Taking Inputs
    printf("Enter the value of a and b: ");   
    scanf("%lf%lf", &a, &b);

    //Operation
    result = calculateArea(a,b);             
    
    
    //Result
    printf("Area: %.3f", result);            

    return 0;    
}


//Function Defination
double calculateArea(double a, double b)     
{

    double area = a * b;
    return area;
}
