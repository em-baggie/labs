// Estimates the value of e

#include <stdio.h>

int main(void) {
    int n;
    float e = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        e += 1.0 / fact;
    }
    printf("%f\n", e);

}