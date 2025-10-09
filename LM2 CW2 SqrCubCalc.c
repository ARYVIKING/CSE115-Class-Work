#include <stdio.h>

int main (void)
{
    //Defining Integers
    int num, sqr, cub;

    //Getting Inputs
    printf("Enter an Integer: ");
    scanf("%d", &num);

    //Computation
    sqr = num * num;
    cub = sqr * num;

    //Result
    printf("Square: %d\nCube: %d", sqr, cub);


    return 0;
}
