/*A program to detect even numbers between to numbers and print those in descending order*/
#include <stdio.h>

int Num(int m, int n); // Function Call
int main (void)
{
    int m, n;  // Declaring Variables
    printf("\nEnter value of m & n: ");
    scanf("%d%d", &m, &n);


    Num(m,n); // Function Call

    return 0 ;
}


// Function Definition
int Num(int m, int n)
{
    for(int i = n; i >= m; i--)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
