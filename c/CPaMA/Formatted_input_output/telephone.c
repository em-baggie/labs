#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter a telephone number in the form (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("You entered: %03d.%03d.%04d\n", a, b, c);
}