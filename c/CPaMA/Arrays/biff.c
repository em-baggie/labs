#include <stdio.h>
#include <ctype.h>

#define MAX 20

int main(void) {
    char sentence[MAX] = {0};
    char ch, chi;
    int i = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && i < MAX) {
        sentence[i] = ch;
        i++;
    }

    printf("In B1FF-speak: ");

    for (i = 0; i < MAX; i++) {
        chi = toupper(sentence[i]);
        switch(chi) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(chi);
        }
    }
    printf("!!!!!!!!!!\n");
}