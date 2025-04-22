// calculates factorial
// worked out largest value of n that correctly prints out factorial for each type

#include <stdio.h>

int main(void) {
    int n;
    float fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        fact *= i;
    }

    printf("Factorial of %d: %f\n", n, fact);
}

// short: 7
// int: 12
// long: 20
// long long: 20
// float: 34

