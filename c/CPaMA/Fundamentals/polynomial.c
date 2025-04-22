#include <stdio.h>

int main(void) {
    float poly, x;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    poly = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    //poly = (((((((((3 * x) + 2) * x) -5) * x) -1) * x) + 7) * x) - 6;
    printf("%.2f", poly);
}