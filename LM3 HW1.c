//Shows your name's first letter,age and expected CGPA
#include <stdio.h>

int main (void)
{
    //Defining Variables
    char ch;
    int age;
    float cgpa;

    //Taking Inputs
    printf("Enter the first letter of your name: ");
    scanf("%c", &ch);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your expected CGPA for this course: ");
    scanf("%f", &cgpa);


    //Result
    printf("\n Your name's first letter is %c\n Your age is %d\n Your expected CGPA is %.2f\n", ch, age, cgpa);

    return 0 ;
}
