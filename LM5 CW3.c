//A program that takes integers and prints their Square and Cube value
#include <stdio.h>

//Function Declaration
int CalcSqr (int num);
int CalcCub (int num);

int main (void)
{
    //Variable Declaration
    int num, Sqr, Cub, Square, Cube;

    //Taking inputs
    printf("Enter an Integer: ");
    scanf("%d", &num);

    //Computation
    Square = CalcSqr(num);
    Cube = CalcCub(num);

    //Result
    printf("Square of %d: %d\n",  num, Square);
    printf("Cube   of %d: %d\n",  num, Cube);


    return 0;
}

//Function Defination1
int CalcSqr (int num)
{

    int Sqr = num * num;
     return Sqr;
}

//Function Defination2
int CalcCub (int num)
{

    int Cub = num * num * num;
    return Cub;
}
