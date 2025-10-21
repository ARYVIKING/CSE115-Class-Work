#include <stdio.h>

int main (void)
{
    int age;
    char gender;

     printf("Enter your Gender: ");
    scanf("%c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);


    if (age >= 18)
    {
        if(gender == 'M' || gender == 'm')
        {
            printf("This Male is Eligible to vote");
        }
        else if (gender == 'F' || gender == 'f')
        {
            printf("This Female is Eligible to vote");
        }
        else
        {
            printf("\nGender Error code 69\n");
        }
    }
    else
    {
        printf("\nYou are not Eligible to vote");
    }

    return 0 ;
}
