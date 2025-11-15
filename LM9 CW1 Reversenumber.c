/*A program to print reversed number of any given number*/
#include <stdio.h>

int reverse(int n);
int main (void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: %d",reverse(num));

    return 0;
}

/*Reverse Function*/
int reverse(int n)
{
    int rev = 0;
    for(; n > 0; n/=10 )
    {
        int digit = n %10;
        rev = rev * 10 + digit;
    }return rev;
}
