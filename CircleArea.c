#include <stdio.h>

int main (void)
{
    //defining variables
    float area,rad, pi = 3.1416;

    //asking input
    printf("What is the radius of the circle?: ");
    scanf("%f" , &rad);

    // computation
    area = pi * rad * rad;


    //result
    printf("Area: %.4f\n", area);


    return 0;
}

