// Calculates and diplays the greatest common divisor of two integers
#include <stdio.h>

int main(void) {
    int m, n, GCD, rem, a, b, num, den;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    a = m;
    b = n;
    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }
    
    GCD = a;
    num = m / GCD;
    den = n / GCD;

    printf("In lowest terms: %d/%d\n", num, den);
}
