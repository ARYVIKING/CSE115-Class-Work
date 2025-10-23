/*A menu-driven program using a switch case */
#include <stdio.h>

int LeapDetect(int year); // Leap year detector function
int factorial(int n);     // Factorial detector function
int LargerNum (int, int, int); // Larger number detector function
int main (void)
{
    //Declaring Variables
    int choice, year, leap, num, num1, num2, num3;

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
    scanf("%d", &num);
    printf("\nFactorial of %d = %d\n", num, factorial(num)/*Function Call*/);
    break;

    case 3: //Larger number detect
    return LargerNum (num1,num2,num3);
    break;

    case 4: // Exit Program
        printf("\nPress Enter to confirm exit\n");
    break;
    }
    return 0 ;
}



// 1)Leap year detector function 
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
    printf("\nEnter Three Different Integers \n Enter 1st Number: ");
    scanf("%d", &num1);
    printf("\n Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("\n Enter 3rd Number: ");
    scanf("%d", &num3);

 if (num1 > num2)
    {
        if(num1 > num3)
            printf(" %d is the largest number", num1);
        else
            printf(" %d is the largest number", num3);
    }
    else
    {
        if(num2 > num3)
            printf(" %d is the largest number", num2);
        else
            printf(" %d is the largest number", num3);
    }

}
