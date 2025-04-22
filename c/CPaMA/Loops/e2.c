// Estimates the value of e

#include <stdio.h>

int main(void) {
    int n;
    float e = 0.0;
    float small;

    printf("Enter a small floating-point number: ");
    scanf("%f", &small);

    for (int i = 0;; i++) {
        int fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        float incr = 1.0 / fact;
        if (incr < small) {
            break;
        } else {
            e += incr;
        }
    }
    printf("%f\n", e);
}