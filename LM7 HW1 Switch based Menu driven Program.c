/*A menu-driven program using a switch case */
#include <stdio.h>

int LeapDetect(int year); // Leap year detector function
double factorial(double n);     // Factorial detector function
int LargerNum (int, int, int); // Larger number detector function
int main (void)
{
    //Declaring Variables
    int choice, year, leap,  num1, num2, num3;
    double num;

    //Menu
    printf("1)Check Leap Year\n");
    printf("2)Calculate Factorial\n");
    printf("3)Find the Largest Number of three\n");
    printf("4)Exit Program\n");
    printf("\nEnter choice ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1: // Leap year detect
    printf("\nEnter the Year: ");
    scanf("%d", &year);
    leap = LeapDetect(year);
    break;

    case 2: // Factorial Calculate
    printf("Enter a positive Integer: ");
    scanf("%lf", &num);
    printf("\nFactorial of %.lf = %.lf\n", num, factorial(num)/*Function Call*/);
    break;

    case 3: //Larger number detect
    return LargerNum (num1,num2,num3);
    break;

    case 4: // Exit Program
    break;
    }
    return 0 ;
}



//Leap year detector function (1)
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


//Factorial calculator function(2)
double factorial(double n)
 {
    if (n)
     {
         return n * factorial(n -1);
     }
     else
         return 1;
 }



//Larger number of 3 detector(3)
int LargerNum (int num1, int num2, int num3)
 {
    printf("Enter three different Integers \n Enter 1st Number: ");
    scanf("%d", &num1);
    printf("\n Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("\n Enter 3rd Number: ");
    scanf("%d", &num3);

 if (num1 > num2 && num1 > num3)
    {
        printf("\nThe Larger Number is %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\nThe Larger Number is %d\n", num2);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("\nThe Larger Number is %d\n", num3);
    }
    else
    {
        printf("Multiple Numbers are Equal\n Try again..\n");
    }
    return 0 ;
}
