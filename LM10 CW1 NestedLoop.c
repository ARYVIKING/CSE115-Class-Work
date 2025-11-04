#include <stdio.h>

int Forloop (void);  // Function 
int main(void)

{

    Forloop();
    return 0;
}

int Forloop (void)
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j%2)
            {
                printf(" 1 ");
            }
            else
                printf(" 0 ");
        }
        printf("\n");
    }
    return 0 ;
}

