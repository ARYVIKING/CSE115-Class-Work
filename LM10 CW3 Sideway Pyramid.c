/*A program to print Sideway Pyramid pattern*/
#include <stdio.h>

int SidewayPyramid(int n);
int main (void)
{
    int num;
    printf("\nEnter number of rows: ");
    scanf("%d", &num);

    SidewayPyramid(num);

    return 0;
}

int SidewayPyramid(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
            printf("\n");
    }

}
