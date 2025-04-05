// takes first and last name and formats as first name, initial.
// ignores whitespace before and after each name

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a first name and last name: ");

    while ((ch = getchar()) == ' ');

    do {
        printf("%c", ch);
    } while ((ch = getchar()) != ' ' && ch != '\n');

    while ((ch = getchar()) == ' ');

    if (ch != '\n') {
        printf(", %c.\n", ch);
    }

    return 0;
}