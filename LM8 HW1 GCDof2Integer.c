/*A program to calculate GCD of two postive integer*/
#include <stdio.h>

int GCD(int a, int b);
int main (void)
{
    int num1, num2;

    printf("Enter two positive Integers: ");
    scanf("%d%d", &num1, &num2);

    GCD(num1, num2);

    return 0;
}

/*Function to calculate GCD of two positive integers*/
int GCD(int a, int b)
{
    int gcd, temp;

    while(a != 0)
    {
        temp = a;  /*Stores the value of a*/
        a = b % a; /*Decrements the value of a*/
        b = temp;  /*changes the value of b to the value of a from the start of the iteration*/
        
    }
    gcd = b;       
    printf("%d", gcd);
}
