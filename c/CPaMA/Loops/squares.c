#include <stdio.h>

int main(void) {
    int n, square;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i * i <= n; i++) {
        square = i * i;
        if (!(square % 2)) {
            printf("%d\n", square);
        }
    }
}