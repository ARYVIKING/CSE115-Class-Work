/*A program that takes h from the user and calculates the falling time*/
#include <stdio.h>
#include <math.h>

int main (void)
{
    //Defining Variables
    float h, t, g = 9.81;

    //Taking Inputs
    printf("Enter the Height: ");
    scanf("%f", &h);

    //Computation
    t = sqrt((2 * h) / g);

    //Result
    printf("Required time to fall: %f s", t);

    return 0 ;
}
