#include <stdio.h>

int main(void) {
    float income, tax;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.00f) {
        tax = 0.01f * income;
    } else if (income <= 2250.00f) {
        tax = 7.50f + (0.02f * (income - 750.00f));
    } else if (income <= 3750.00f) {
        tax = 37.50f + (0.03 * (income - 2250.00f));
    } else if (income <= 5250.00f) {
        tax = 82.50f + (0.04 * (income - 3750.00f));
    } else if (income <= 7000.00f) {
        tax = 142.50f + (0.05 * (income - 5250.00f));
    } else {
        tax = 230.00f + (0.06 * (income - 7000.00f));
    }
    printf("%.2f", tax);
}