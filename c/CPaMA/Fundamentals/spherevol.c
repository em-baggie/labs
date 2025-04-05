#include <stdio.h>
#define M_PI 3.14159265358979323846

// Computes volume of a sphere

int main(void) {
    float v;
    int r;

    printf("Input radius: ");
    scanf("%i", &r);
    v = 4.0f/3.0f * M_PI * r * r * r;
    printf("%.2f", v);
}