/*A C function void check Disarium(int *n, int *result) to check if a number is a Disarium number*/
#include <stdio.h>
#include <math.h>

/*Function Declaration*/
int disarium(int *n, int *result);
int main(void)
{
    int a , res;

    printf("Enter a number: ");
    scanf("%d", &a);

    /*Function call*/
    disarium(&a, &res);

    /*Checking if the number is Disarium*/
    if( res == a)
        printf("\n%d is a Disarium\n", a);

    else
        printf("\n%d is not a Disarium\n", a);


    return 0;

}

/*Function Definition*/
int disarium(int *n, int *result)
{
    int temp = *n;
    int count = 0;

    /*Secondary Loop to count required Iterations*/
    while(temp)
    {
        temp /= 10;
        count++ ;
    }
     temp = *n ;

     *result = 0;
     /*Primary Loop to calculate the result number*/
     for(int i = count; i > 0; i--)
     {
         int digit = temp % 10;
         *result += pow(digit, i);
         temp /= 10;

     }
     return *result;
}
