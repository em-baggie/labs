#include <stdio.h>

int main(void) {
    float commission1, commission2, value, pps;
    int shares;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%f", &pps);

    value = pps * shares;

    // first broker
    if (value < 2500.00f) {
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

    // rival broker
    if (value < 2500.00f) {
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

    if (shares < 2000) {
        commission2 = 33.00f + 0.03 * shares;
    } else {
        commission2 = 33.00f + 0.02 * shares;
    }

    printf("Original commission: $%.2f\n", commission1);
    printf("Rival commission: $%.2f\n", commission2);

    return 0;
}