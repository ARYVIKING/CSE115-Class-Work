//A program to check if a number is divisible by both 5 and 11
#include <stdio.h>

int main (void)
{
    //Declaring Variables
    int num ;

    //Taking Inputs
    printf("Enter the Number: ");
    scanf("%d", &num);

    //Checking Conditions
    if (num %5 == 0 || num %11 == 0)
    {
        printf("\nThe number is divisible by both 5 and 11\n");
    }
    else
    {
        printf("\nThe number is not divisible by both 5 and 11\n");
    }


    return 0 ;
}

