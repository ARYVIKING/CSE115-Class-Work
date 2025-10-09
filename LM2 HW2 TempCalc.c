#include <stdio.h>

int main(void)
{

    //Defining Variables
    float far,cel;

    //Getting Input
    printf("Enter Farenheit: ");
    scanf("%f", &far);

    //Computation
    cel = (far - 32) * 5/9;

    //Result
    printf("Celcius: %f", cel);

    return 0;
}
