#include <stdio.h>
int main (void)
{
    //Defining Integers
    float vol, rad, height, PI = 3.1416;

    //Getting Inputs
    printf("Enter the Radius of the Cylinder: ");
    scanf("%f", &rad);

    printf("Enter the Height of the Cylinder: ");
    scanf("%f", &height);

    //Computation
    vol = PI * rad * rad * height;

    //Result
    printf("Volume of the Cylinder: %f", vol);


    return 0;
}
