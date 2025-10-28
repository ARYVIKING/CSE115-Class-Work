/*A C program to take user inputs and calculate their sum*/
#include <stdio.h>


int NumCount(int n); // Declaring Function
int main (void)
{
    int num; // Declaring Variables
    
    // Taking Inputs
    printf("\nHow many number do you want to enter: ");
    scanf(" %d", &num);
    
    // Function Call
    NumCount(num);

    return 0 ;
}


// Defining Function
int NumCount(int n)
{

    int i = 0, dig, sum; // Declaring Variables
    
    while(  i < n )      // Loop Condition
    {
        i++;                                //Loop Body and Expression Incrementation
        printf("\nEnter Number %d: ", i );
        scanf(" %d", &dig);

        sum = sum + dig;

    }
    printf("\nThe sum of the entered number = %d\n", sum); // Printing Total Sum

}
