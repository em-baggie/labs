#include <stdio.h>

int main(void) {
    int num, ten, digit;

    printf("Enter numerical grade: ");
    scanf("%d", &num);

    digit = num % 10;
    ten = num / 10;

    switch(ten) {
        case 10: printf("Letter grade: A\n"); break;
        case 9: printf("Letter grade: A\n"); break;
        case 8: printf("Letter grade: B\n"); break;
        case 7: printf("Letter grade: C\n"); break;
        case 6: printf("Letter grade: D\n"); break;
        default: printf("Letter grade: F\n"); break;
    }
}