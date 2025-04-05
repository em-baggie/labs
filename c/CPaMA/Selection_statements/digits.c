#include <stdio.h>

int main(void) {
    int num, digits;

    printf("Enter an integer between 0 and 9999: ");
    scanf("%d", &num);
    
    if (num >= 0 && num <= 9) {
        digits = 1;
        printf("1 digit\n");
    } else if (num >= 10 && num <= 99) {
        digits = 2;
        printf("2 digits\n");
    } else if (num >= 100 && num <= 999) {
        digits = 3;
        printf("3 digits\n");
    } else if (num >= 1000 && num <= 9999) {
        digits = 4;
        printf("4 digits\n");
    } else {
        printf("invalid integer entered");
    }
}