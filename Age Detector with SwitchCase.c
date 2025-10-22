//A Program To detect Voting eligibility by getting age and gender (Switch Case Variant)
#include <stdio.h>

int main (void)
{

    int age;
    printf("Enter value for age: ");
    scanf("%d", &age);

    switch(age>=18)
    {
      case 0 :
        printf("\nYou are a minor!\n");
        break;
      case 1 :
        printf("\nYou are a proper adult\n");
        break;
    }

    return 0 ;
}
