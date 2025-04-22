#include <stdio.h>

int main(void) {
    int GSI, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &group, &publisher, &item, &check);
    printf("GSI prefix: %d\n", GSI);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check);

    return 0;
}

// note doesn't work if one of the codes begins in 0