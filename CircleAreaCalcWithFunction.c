/*A program that calculates the area of a circle and determines its Size*/
#include <stdio.h>
#include <math.h>

//Function Declaration
double calculateArea(double a, double b);
int main (void)
{

    //Defining Variables
    double r, pi = 3.1416, result;

    //Taking Inputs
    printf("Enter the value of r : ");
    scanf("%lf", &r);

    //Operation
    result = calculateArea(r,pi);


    //Result
    printf("Area: %.3f", result);



if (r>20)
{
    printf("\nLarge");
}
  else if (r>=10 && r <= 20)
{
    printf("\nMedium");
}
else
{
    printf("\nsmall");
}

    return 0;
}


//Function Defination
double calculateArea(double r, double pi)     //Function Define
{

    double area = r * r * pi;
    return area;
}
