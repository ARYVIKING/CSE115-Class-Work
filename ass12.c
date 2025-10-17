#include <stdio.h>

int main() {
    int amount;
    int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    // Input the amount
    printf("Enter the amount in BDT: ");
    scanf("%d", &amount);

    // Calculate the number of notes for each denomination
    note1000 = amount / 1000;
    amount %= 1000;

    note500 = amount / 500;
    amount %= 500;

    note200 = amount / 200;
    amount %= 200;

    note100 = amount / 100;
    amount %= 100;

    note50 = amount / 50;
    amount %= 50;

    note20 = amount / 20;
    amount %= 20;

    note10 = amount / 10;
    amount %= 10;

    note5 = amount / 5;
    amount %= 5;

    note2 = amount / 2;
    amount %= 2;

    note1 = amount;

    // Display the breakdown
    printf("\nBreakdown of banknotes:\n");
    printf("1000 Taka notes: %d\n", note1000);
    printf("500 Taka notes : %d\n", note500);
    printf("200 Taka notes : %d\n", note200);
    printf("100 Taka notes : %d\n", note100);
    printf("50 Taka notes  : %d\n", note50);
    printf("20 Taka notes  : %d\n", note20);
    printf("10 Taka notes  : %d\n", note10);
    printf("5 Taka notes   : %d\n", note5);
    printf("2 Taka notes   : %d\n", note2);
    printf("1 Taka notes   : %d\n", note1);

    return 0;
}



















