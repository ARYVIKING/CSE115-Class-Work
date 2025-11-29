/*A C program to find and print the sum of all elements of an array using a pointer instead of array indexing*/
#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    int *ptr;
    int arr[999];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for(i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("sum: %d", sum);

    return 0;
}
