// reverses a 3-digit number

#include <stdio.h>

int main(void) {
    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    do {
        a = num % 10;
        printf("%d", a);
        num /= 10;
    }
    while (num > 0);
    printf("\n");
}