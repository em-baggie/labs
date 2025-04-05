// displays departure and arribal times for the flight whose departure time is closest to that entered by user

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, mins;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &mins, &ch );

    ch = toupper(ch);

    hours = (ch == 'P' ? 12 : 0) + hours;
    printf("The 24-hour time is: %02d:%02d\n", hours, mins);

}