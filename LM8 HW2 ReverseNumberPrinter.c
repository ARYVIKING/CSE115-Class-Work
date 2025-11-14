/*A program to take a number and print the digits of the number is reverse order*/
#include <stdio.h>


void digit(int n);
int main (void)
{
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);

    digit(num);

    return 0;
}

void digit(int n)
{
    if(n < 0)
        {
            n = n * (-1);
        }
    while(n)
    {
        int digit = n%10;
        printf("%d", digit);

        n = n/10;
    }
}
