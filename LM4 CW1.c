/*A program where the user enters two GPS coordinates (x1,y1, and x2,y2),
and the program calculates the straight-line distance.*/
#include <stdio.h>
#include <math.h>

int main (void)
{

    //Defining Variables
    int x1,y1,x2,y2;
    float distance;

    //Taking Inputs
    printf("Enter 1st Coordinate: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter 2nd Coordinate: ");
    scanf("%d%d", &x2, &y2);

    //Computation
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    //Result
    printf("Distance: %.3f", distance);


    return 0 ;
}
