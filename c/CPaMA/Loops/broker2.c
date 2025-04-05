// calculates commission on each trade entered

#include <stdio.h>

int main(void) {
    float commission1, commission2, value, pps;
    int shares;

    for (;;) {
        printf("Enter the value of the trade: ");
        scanf("%f", &value);

        if (value == 0) {
            break;
        } else if (value < 2500.00f) {
            commission1 = 30.00f + 0.17f * value;
        } else if (value < 6250.00f) {
            commission1 = 56.00f + 0.0066f * value;
        } else if (value < 20000.00f) {
            commission1 = 76.00f + 0.0034f * value;
        } else if (value < 50000.00f) {
            commission1 = 155.00f + 0.0011f * value;
        } else {
            commission1 = 255.00f + 0.0009f * value;
        }

        if (commission1 < 39.00f) {
            commission1 = 39.00f;
        }
        printf("Commission: $%.2f\n", commission1);
    }
}