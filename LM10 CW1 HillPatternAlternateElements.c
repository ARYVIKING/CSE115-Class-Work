/*A program to print alternate elements in a hill pattern*/
#include <stdio.h>

int hill(int n);
int main (void)
{
    int num;
    printf("\nEnter number of rows: ");
    scanf("%d", &num);

    hill(num);

    return 0;
}

int hill(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j%2)
                printf(" 1 ");
            else
                printf(" 0 ");
        }printf("\n");
    }

}
