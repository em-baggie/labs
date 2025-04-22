// calculates check digit for EAN

#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total, remainder, check;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    // printf("%d\n", first_sum);
    second_sum = i1 + i3 + i5 + i7 + i9+ i11;
    // printf("%d\n", second_sum);
    total = ((first_sum * 3) + second_sum) - 1;
    // printf("%d\n", total);
    remainder = total % 10;
    // printf("%d\n", remainder);
    check = 9 - remainder;
    
    printf("Check digit: %d\n", check);
}