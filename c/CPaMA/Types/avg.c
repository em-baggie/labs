// calculates average length of word in sentence

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    float avg = 0, length = 0, count = 1;
    // count needs to be initialised at 1 - last word does not have space afterwords so will not be counted

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        if (ch != ' ') {
            length ++;
        } else {
            count ++;
        }

    avg = length / count;
    
    printf("The average word length is: %.2f\n", avg);

    return 0;
}