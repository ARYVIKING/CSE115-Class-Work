/*A menu-driven program using a switch case */
#include <stdio.h>

int LeapDetect(int year);      // Leap year detector function
int factorial(int n);          // Factorial detector function
int LargerNum (int, int, int); // Larger number detector function
int main (void)                // Main Function
{
    //Declaring Variables
    int choice,            // Switch Parameter
        year,              // Case 1 Parameter(Leap Year Detector)
        num,               // Case 2 Parameter (Factorial Integer)
        num1, num2, num3;  // Case 3 Parameter (Largest Number Detector)

    //Menu
    printf("\n 1)Check Leap Year\n");
    printf(" 2)Calculate Factorial\n");
    printf(" 3)Find the Largest Number of Three\n");
    printf(" 4)Exit Program\n");
    printf("\n Enter Choice ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:  // Detecting Leap Year
    LeapDetect(year); /* Calling Function 1*/
    break;

    case 2:  // Calculating Factorial
    printf("\nEnter a positive Integer: ");
    scanf(" %d", &num);
    printf("\nFactorial of %d = %d\n", num, factorial(num)/* Calling Function 2*/);
    break;

    case 3:  // Detecting Larger Number
    LargerNum (num1,num2,num3); /* Calling Function 3*/
    break;

    case 4:  // Exit Program
    printf("\nPress Enter to confirm exit\n");
    break;

    }
    return 0 ;
}



// 1)Leap year detector function
int LeapDetect(int year)
{
    printf("\nEnter the Year: ");
    scanf("%d", &year);
    if (( year % 400 == 0  ) || (year % 100  && year % 4 == 0 )) /* Any year divided by 400 is a leap year,
        any year divided by 4 is also a leap year unless its also divisible by 100 */
    {
        printf("\nIt is  a leap year\n");
    }
    else
    {
        printf("\nIt is not a leap year\n");
    }
}


// 2) Factorial calculator function
int factorial(int n)
 {
    if (n)
     {
         return n * factorial(n -1);
     }
     else
         return 1;
 }



// 3) Larger number of 3 detector
int LargerNum (int num1, int num2, int num3)
 {
    printf("\nEnter Three Different Integers \n\n Enter 1st Number: ");
    scanf("%d", &num1);
    printf("\n Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("\n Enter 3rd Number: ");
    scanf("%d", &num3);

 if (num1 > num2) /* Checking Condition to detect larger number*/
    {
        if(num1 > num3)
            printf("\n %d is the largest number\n", num1);
        else
            printf("\n %d is the largest number\n", num3);
    }
    else
    {
        if(num2 > num3)
            printf("\n %d is the largest number\n", num2);
        else
            printf("\n %d is the largest number\n", num3);
    }

}
