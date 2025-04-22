// Compares inputted dates and prints the earliest date

#include <stdio.h>

int main(void) {
    int d1, m1, y1, d2, m2, y2, td1, tm1, ty1;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    if (d1 == 0 && m1 == 0 && y1 ==0) {
            return 0;
    }

    td1 = d1;
    tm1 = m1;
    ty1 = y1;

    for(;;) {
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &d2, &m2, &y2);
        if (d2 == 0 && m2 == 0 && y2 ==0) {
            break;
        }
        
        if (y2 < ty1) {
            td1 = d2;
            tm1 = m2;
            ty1 = y2;
        } else if (m2 < tm1) {
            td1 = d2;
            tm1 = m2;
            ty1 = y2;
        } else if (d2 < td1) {
            td1 = d2;
            tm1 = m2;
            ty1 = y2;
        }
    } 

    if (td1 == d1 && tm1 == m1 && ty1 == y1) {
        printf("All dates are the same\n");
    } else {
        printf("%02d/%02d/%02d is the earliest date\n", td1, tm1, ty1);
    }
}