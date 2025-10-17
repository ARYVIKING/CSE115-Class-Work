#include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Conversion logic
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;

    // Display the result
    printf("%d days = %d year(s), %d week(s), and %d day(s)\n", days, years, weeks, remaining_days);

    return 0;
}
