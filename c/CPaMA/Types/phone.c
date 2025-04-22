// translates an alphabetic phone number into numeric form
// 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PQRS, 8=TUV, 9=WXYZ

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a phone number: ");
    while ((ch = getchar()) != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            ch = (int) 2;
            printf("%d", ch);
        } else if (ch == 'D' || ch == 'E' || ch == 'F') {
            ch = (int) 3;
            printf("%d", ch);
        } else if (ch == 'G' || ch == 'H' || ch == 'I') {
            ch = (int) 4;
            printf("%d", ch);
        } else if (ch == 'J' || ch == 'K' || ch == 'L') {
            ch = (int) 5;
            printf("%d", ch);
        } else if (ch == 'M' || ch == 'N' || ch == 'O') {
            ch = (int) 6;
            printf("%d", ch);
        } else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'){
            ch = (int) 7;
            printf("%d", ch);
        } else if (ch == 'T' || ch == 'U' || ch == 'V') {
            ch = (int) 8;
            printf("%d", ch);
        } else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            ch = (int) 9;
            printf("%d", ch);
        } else {
            printf("%c", ch);
        }
    }
    printf("\n");
}