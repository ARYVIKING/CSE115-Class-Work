/*A program in C that will take your age and will return
your birth year*/
#include <stdio.h>

int calculateAge(int year , int age);         //Function call
int main (void)
{
    int age, year, time, result;              //Defining variables
    
    
    printf("Enter current year: ");           //Taking Inputs
    scanf("%d", &year);
    
    printf("Enter your age: ");             
    scanf("%d", &age);

    result = calculateAge(year,age);          //Function Operation

    printf("Your birth year is %d", result);  //Result

    return 0;
}





 int calculateAge(int year, int age)          //Function Defination
{
    int time = 2025 - age;
    return time;
}
