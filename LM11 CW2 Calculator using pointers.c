/*A C function void calculator to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two
numbers using pointers.*/
#include <stdio.h>

/*Function Declaration*/
void Calc(double *num1, double *num2, double *result, char *op);

int main(void)
{

    double a, b, res; /* Variable Declaration*/
    char op;          /* Using extra variable for required print output*/

    printf("\nEnter 1st number: ");
    scanf("%lf", &a);
    printf("\nEnter 2nd number: ");
    scanf("%lf", &b);

    /*Function Call*/
    Calc(&a, &b, &res, &op);

    /*Printing Result ; Example 4 + 1 = 5 */
    printf("\nResult %.2f %c %.2f = %.2f\n", a, op, b, res); 


    return 0;
}

void Calc(double *num1, double *num2, double *result, char *op)
{
    int choice;

    /*Printing Switch options*/
    printf("Select and Operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4):");
    scanf("%d", &choice);

    switch(choice)
    {

        case 1: /*1. Addition*/
            *result = *num1 + *num2;
            *op = '+'; 
            break;

        case 2: /*2. Subtraction*/
            *result = *num1 - *num2;
            *op = '-';
            break;

        case 3: /*3. Multiplication*/
            *result = (*num1) * (*num2);
            *op = '*';
            break;

        case 4: /*4. Division*/
            if(*num2 != 0)
                *result = (*num1) / (*num2);
            else
            {
                /*Output if num2 = 0*/
                printf("Error : Invalid Denominator\n");
                *result = 0;
            }
            *op = '/';
            break;

        default: /*Default Print*/
        printf("Invalid Choice!\n");
    }


}













