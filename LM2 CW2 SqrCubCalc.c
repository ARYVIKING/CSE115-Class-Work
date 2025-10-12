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
    printf("Square of %d: %d\n",  num, sqr);
    printf("Cube   of %d: %d\n",  num, cub);


    return 0;
}
