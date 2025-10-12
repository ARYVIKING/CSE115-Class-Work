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
