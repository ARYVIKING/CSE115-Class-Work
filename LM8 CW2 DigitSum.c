/*A program to count the sum of the digits of a number*/
#include <stdio.h>

int DoWhile(int n); // Declaring Functions
int main (void)
{
    //Declaring Variable
    int n;
    DoWhile(n);  // Function Call
    return 0;
}



// Function Definition
int DoWhile(int n)
{
    // Taking Inputs
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    // Do-While loop
    int sum =  0;
    do
    {
       int digit = n % 10;
       if(n < -10)
       {
           digit = -1 * digit;
       }
        sum += digit ;
        n = n/10;
    }while(n);

    //Result
    printf("\nSum is %d\n", sum);
}
