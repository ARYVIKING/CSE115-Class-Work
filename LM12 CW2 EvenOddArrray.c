/*A program to count the number of even and odd elements in an array*/
#include <stdio.h>

int EvenOdd(int *arr, int n, int *even, int *odd);
int main(void)
{
    int list[100];
    int i, n, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("\nEnter %d elements\n", n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &list[i]);

    EvenOdd(list, n, &even, &odd);

    printf("Even: %d\n", even);
    printf("Odd:  %d\n", odd);


    return 0;
}

int EvenOdd(int *arr, int n, int *even, int *odd)
{
    int i;
    for(i = 0; i < n; i++ )
    {
        if(arr[i]%2)
        {
            (*odd)++;
        }
        else
            (*even)++;
    }
}
