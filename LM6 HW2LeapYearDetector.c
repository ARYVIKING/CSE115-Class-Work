/*A program to check if a given year is a leap year*/
#include <stdio.h>

//Function Declaration
int LeapDetect(int year);
int main (void)
{
    //Variable Declaration
    int year, leap;

    printf("Enter the Year: ");
    scanf("%d", &year);

    //Function Call
    leap = LeapDetect(year);



    return 0 ;
}


//Function Definition
int LeapDetect(int year)
{
    if (( year % 400 == 0  ) || (year % 100  && year % 4 == 0 ))
    {
        printf("\nIt is  a leap year\n");
    }

    else
    {
        printf("\nIt is not a leap year\n");
    }
}


