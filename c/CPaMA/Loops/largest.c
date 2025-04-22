// calculates the largest nonnegative number entered

#include <stdio.h>

int main(void) {
    float largest = 0.0f, num;
    printf("Enter numbers one by one. Enter 0 to exit.\n");

    do {
        printf("Enter number: ");
        scanf("%f", &num);
        if (num > largest) {
            largest = num;
        }
    } while (num > 0); 

    printf("The largest number entered was %f\n", largest);
}
