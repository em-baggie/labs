#include <stdio.h>

int main(void) {
    int num, first, second, third;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    third = num % 10;
    second = (num / 10) % 10;  
    first = num / 100;

    printf("The reversal is: %d%d%d\n", third, second, first);
}