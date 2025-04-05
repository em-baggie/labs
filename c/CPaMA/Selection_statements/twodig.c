// prints English word for inputted two-digit number

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &n1, &n2);

    printf("You entered the number ");

    if (n1 == 1) {
         if (n2 == 0) {
                printf("ten\n");
            } else if (n2 == 1) {
                printf("eleven\n");
            } else if (n2 == 2) {
                printf("twelve\n");
            } else if (n2 == 3) {
                printf("thirteen\n");
            } else if (n2 == 4) {
                printf("fourteen\n");
            } else if (n2 == 5) {
                printf("fifteen\n");
            } else if (n2 == 6) {
                printf("sixteen\n");
            } else if (n2 == 7) {
                printf("seventeen\n");
            } else if (n2 == 8) {
                printf("eighteen\n");
            } else if (n2 == 9) {
                printf("nineteen\n");
            } 
    } else {
        switch(n1) {
        case 9: printf("ninety"); break;
        case 8: printf("eighty"); break;
        case 7: printf("seventy"); break;
        case 6: printf("sixty"); break;
        case 5: printf("fifty"); break;
        case 4: printf("forty"); break;
        case 3: printf("thirty"); break;
        case 2: printf("twenty"); break;
        }

    switch(n2) {
        case 9: printf("-nine"); break;
        case 8: printf("-eight"); break;
        case 7: printf("-seven"); break;
        case 6: printf("-six"); break;
        case 5: printf("-five"); break;
        case 4: printf("-four"); break;
        case 3: printf("-three"); break;
        case 2: printf("-two"); break;
        case 1: printf("-one"); break;
        }
    }
}