#include <stdio.h>

int main(void) {
    int total, bills20, bills10, bills5, bills1;

    printf("Enter an amount in whole USD: ");
    scanf("%d", &total);

    bills20 = total/20;
    total = total - (bills20 * 20);
    bills10 = total/10;
    total = total - (bills10 * 10);
    bills5 = total/5;
    total = total - (bills5 * 5);
    bills1 = total/1;
    
    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);
}