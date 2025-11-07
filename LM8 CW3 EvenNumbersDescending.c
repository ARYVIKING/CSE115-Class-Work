/*A program to print all even numbers between m and n (m, n are user
inputs) in reverse order*/
#include <stdio.h>

int function(int m, int n); /*Function Declaration*/
int main (void)
{
    /*Variable Declaration*/
    int m , n;

    printf("\nEnter the values of m and n: ");
    scanf(" %d%d", &m, &n);


    printf("\nEven Numbers between %d and %d: ", n, m);
    printf(" %d\n", function(m,n));

    return 0;
}


/*Function Definition (Function to show even numbers between m to n in descending order)*/
int function(int m, int n)
{
   int i;
    if(i%2)

    i = n -1;

     else
        i = n;

    for(; i >= m; i = i-2 )
        printf(" \n%d\n ", i);

}
