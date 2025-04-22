#include <stdio.h>

int main(void) {
    float loan, ir, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &ir);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float mir = ((ir / 12)/100) + 1;
    float balance1 = (loan * mir) - monthly_payment;
    float balance2 = (balance1 * mir) - monthly_payment;
    float balance3 = (balance2 * mir) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", balance1);
    printf("Balance remaining after second payment: %.2f\n", balance2);
    printf("Balance remaining after third payment: %.2f\n", balance3);
}