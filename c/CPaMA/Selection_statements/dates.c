// Compares 2 inputted dates

#include <stdio.h>

int main(void) {
    int d1, m1, y1, d2, m2, y2;

    printf("Enter first date: ");
    scanf("%02d/%02d/%02d", &d1, &m1, &y1);
    printf("Enter second date: ");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    if (y1 < y2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    } else if (y2 < y1) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    } else if (m1 < m2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    } else if (m2 < m1) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    } else if (d1 < d2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
    } else if (d2 < d1) {
         printf("%d/%d/%d is earlier than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    } else {
        printf("Both dates are the same\n");
    }
}