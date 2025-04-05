// prints a table showing number of occurences for each digit in an entered number

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int digit_count[10];
    int digit;
    long n, ncpy;

    do {

        for (int i = 0; i < 10; i++) {
            digit_count[i] = 0;
        }

        printf("Enter a number: ");
        scanf("%ld", &n);

        ncpy = n;

        printf("Digit:      ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", i);
        }
        printf("\n");
        
        printf("Occurences: ");
        while (ncpy > 0) {
            digit = ncpy % 10;
            digit_count[digit] += 1;
            ncpy /= 10;
        }
        
        for (int i = 0; i < 10; i++) {
            printf("%d ", digit_count[i]);
        }
        printf("\n");

    } while (n > 0);

    return 0;
}