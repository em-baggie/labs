// Calculates and diplays the greatest common divisor of two integers
#include <stdio.h>

int main(void) {
    int m, n, rem;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }
    printf("Greatest common divisor: %d\n", m);
}

//if n is 0 then stop -> m contains GCD
// Otherwise compute remainder when m divided by n
// copy n into m and copy the remainder into n then repeat the process