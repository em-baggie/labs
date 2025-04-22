#include <stdio.h>

int main(void) {
    int days, dow;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of week (1=Sun, 7=Sat): ");
    scanf("%d", &dow);

    for (int i = 0; i < dow; i++) {
        printf("  ");
    }

    for (int i = 1; i <= days; i++) {
        if (!(dow % 7)) {
            printf("%2d\n", i);
        } else {
            printf("%2d ", i);
        }
        ++dow;
    }
}