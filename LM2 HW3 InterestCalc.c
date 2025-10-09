#include <stdio.h>

int main (void)
{
    //Defining Variables
    float P, R, T, interest ;

    //Getting Inputs
    printf("What is your Principal: ");
    scanf("%f", &P);

    printf("What is your Rate     : ");
    scanf("%f", &R);

    printf("What is your Time     : ");
    scanf("%f", &T);


    //Computation
    interest = (P * R * T)/100 ;

    //Result
    printf("Interest: %.3f", interest);



    return 0;
}
