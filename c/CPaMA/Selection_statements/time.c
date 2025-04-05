#include <stdio.h>

int main(void) {
    int hours, mins;

    printf("Enter a 24-hour time in the format hh:mm -  ");
    scanf("%d:%d", &hours, &mins);
    switch (hours) {
        case 13: hours = 1; break;
        case 14: hours = 2; break;
        case 15: hours = 3; break;
        case 16: hours = 4; break;
        case 17: hours = 5; break;
        case 18: hours = 6; break;
        case 19: hours = 7; break;
        case 20: hours = 8; break;
        case 21: hours = 9; break;
        case 22: hours = 10; break;
        case 23: hours = 11; break;
        case 00: hours = 12; break;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d\n", hours, mins);
}