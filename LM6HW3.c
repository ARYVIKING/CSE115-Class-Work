/* A program to check whether a triangle is valid based on its angles. A triangle
is valid if the sum of its three angles is 180°*/
#include <stdio.h>

int main (void)
{
    //Declaring Variables
    float ang1, ang2, ang3;

    //Taking Inputs
    printf("Enter 1st angle: ");
    scanf("%f", &ang1);

    printf("Enter 2nd angle: ");
    scanf("%f", &ang2);

    printf("Enter 3rd angle: ");
    scanf("%f", &ang3);



    // Using if-else to check the condition
    if (ang1 + ang2 + ang3 == 180)
    {
        printf("\nThe triangle is valid\n");
    }
    else
    {
        printf("\nThe triangle is not valid\n");
    }

    return 0 ;
}

