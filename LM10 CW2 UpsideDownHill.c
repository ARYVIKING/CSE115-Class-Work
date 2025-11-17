/*A program to print upside down hill pattern*/
#include <stdio.h>

int reverseHill(int n);
int main (void)
{
    int num;
    printf("\nEnter number of rows: ");
    scanf("%d", &num);

    reverseHill(num);

    return 0;
}

int reverseHill(int n)
{
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(" * ");
        }printf("\n");
    }

}
