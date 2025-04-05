// Code to format date

#include <stdio.h>

int main(void) {
    int d, m, y;

    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("You entered the date: %d%02d%2d\n", y, m, d);
}