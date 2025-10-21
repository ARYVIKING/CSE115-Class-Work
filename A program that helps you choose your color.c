//A program that helps you choose your color
#include <stdio.h>

int main (void)
{
    //Defining Variables
    char choice;

    //Taking Inputs
    printf("Enter your Color Choice: ");
    scanf("%c", &choice);

    //Using Switch
    switch(choice)
    {

    case 'r':
        printf("You selected Red");
        break;
    case 'g':
        printf("You selected Green");
        break;
    case 'b':
        printf("You selected Blue");
        break;
    default:
        printf("Invalid color");

    }

    return 0 ;
}
