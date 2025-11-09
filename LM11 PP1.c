#include <stdio.h>

void swap(int *a, int *b);

int main()
{
int num1 = 5, num2 = 10;

printf("Before swapping: num1 = %d, num2 = %d\n\n", num1, num2);

// Call swap function and pass the addresses of num1 and num2
swap(&num1, &num2);

printf("After swapping: num1 = %d, num2 = %d\n\n", num1, num2);

return 0;
}

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
