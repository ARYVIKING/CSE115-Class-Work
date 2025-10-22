#include <stdio.h>

//Function Call
double CalculateSquare( double num);
double CalculateCube( double num);
int main (void)

{
    //Defining variables
    double num, sqr, cub, Square, Cube;

    //Getting Inputs
    printf("Enter a value: ");
    scanf("%lf", &num);

    //Computation
      Square = CalculateSquare(num);
      Cube   = CalculateCube(num);


    //Result
    printf("Square of %lf: %.4lf\n",  num, Square);
    printf("Cube   of %lf: %.4lf\n",  num, Cube);


    return 0;
}


//Function 1
double CalculateSquare(double num)
{
double sqr = num * num;
return sqr;
}



//Function 2
double CalculateCube(double num)
{
double cub = num * num * num;
return cub;
}
