// displays departure and arribal times for the flight whose departure time is closest to that entered by user

#include <stdio.h>

int main(void) {
    int hours, mins, time, diff1, diff2, diff3, diff4, diff5, diff6, diff7, diff8;

    // calculate differences
    diff1 = 8 * 60;
    diff2 = 9 * 60 + 43;
    diff3 = 11 * 60 + 19;
    diff4 = 12 * 60 + 47;
    diff5 = 14 * 60;
    diff6 = 15 * 60 + 45;
    diff7 = 19 * 60;
    diff8 = 21 * 60 + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);

    time = (hours * 60) + mins;

    if (time < diff1 + ((diff2 - diff1) / 2)) {
        printf("Closest departure time is 8:00am, arriving at 10:16am\n");
    } else if (time < diff2 + ((diff3 - diff2) / 2)) {
        printf("Closest departure time is 9:43am, arriving at 11:52am\n");
    } else if (time < diff3 + ((diff4 - diff3) / 2)) {
        printf("Closest departure time is 11:19am, arriving at 1:31pm\n");
    } else if (time < diff4 + ((diff5 - diff4) / 2)) {
        printf("Closest departure time is 12:47pm, arriving at 3:00pm\n");
    } else if (time < diff5 + ((diff6 - diff5) / 2)) {
        printf("Closest departure time is 2:00pm, arriving at 4:08pm\n");
    } else if (time < diff6 + ((diff7 - diff6) / 2)) {
        printf("Closest departure time is 3:45pm, arriving at 5:55pm\n");
    } else if (time < diff7 + ((diff8 - diff7) / 2)) {
        printf("Closest departure time is 7:00pm, arriving at 9:20pm\n");
    } else {
        printf("Closest departure time is 9:45pm, arriving at 11:58pm\n");
    }

}