#include <stdio.h>

int main(void) {
    float loan, ir, monthly_payment, balance, balance0;
    int num;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &ir);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &num);

    float mir = ((ir / 12)/100) + 1;

    balance = loan;
    for (int i = 0; i < num; i++) {
        balance = (balance * mir) - monthly_payment;
        printf("$%.2f\n", balance);
    }
}