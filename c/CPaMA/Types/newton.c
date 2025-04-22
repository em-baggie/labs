// Uses Newton's method to compute the square root of a positive floating point number.

#include <stdio.h> 
#include <math.h>

int main(void) {
    double x, y2, avg, y1, diff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y1 = 1;

    do {
        y2 = (y1 + (x/y1)) / 2;
        diff = fabs(y1 - y2);
        y1 = y2;
    } while (diff > 0.00001 * y2);

    printf("Square root: %.3f\n", y1);
}