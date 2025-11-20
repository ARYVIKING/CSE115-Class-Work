/*A program to calculate area and perimeter using pointer*/
#include <stdio.h>
#define PI 3.1416


void areaPeri(double *r); /*Declaring Function*/
int main(void)
{
    double rad = 5;

    printf("For a circle with radius: %.2f", rad);
    areaPeri(&rad);    /*Calling Function*/

    return 0;
}


/*Function Defination*/
void areaPeri(double *r)
{
    double rad = *r;
    double area = PI * rad * rad ;    /*formula of area*/

    double perimeter = 2 * PI * rad;  /*formula of perimeter*/

    printf("\nArea: %.2f\nPerimeter: %.2f\n", area, perimeter);
}
