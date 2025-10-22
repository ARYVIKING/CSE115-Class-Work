/*Leap Year detector (Using nested If-else condition)*/
#include <stdio.h>

//Function Declaration
int LeapDetect(int year);
int main (void)
{
    //Declaring Variables
    int year, leap;

    //Taking Inputs
    printf("Enter year: ");
    scanf("%d", &year);

    //Function Call
    leap = LeapDetect(year);


    return 0 ;
}

//Function Definition
int LeapDetect(int year)
{
  if (year % 400)
  {
    if(year % 100)
    {
     if(year % 4)
     {
         printf("\n%d is not a Leap Year\n", year);
     }
     else
        printf("\n%d is a Leap Year\n", year);
    }
    else
        printf("\n%d is not a Leap Year\n", year);
  }
  else
    printf("\n%d is a Leap Year\n", year);



    return 0 ;
}
