/* Prints a table of squares using a for statement */
// Added in "Press enter to continue" line after every 24th entry

#include <stdio.h>
int main (void) {
    long i, n;
    printf ("This program prints a table of squares. \n");
    printf ("Enter number of entries in table: ");
    scanf ("%ld", &n) ;

    getchar();
    // need to clear buffer as \n is left in buffer when n is entered by user
    // enter initiates scanf function, scanf reads according to %ld format specifier, which will not consume \n so will remain in input buffer)

    for (i = 1; i <=n; i++) {
        printf ("%20ld%20ld\n", i, i * i);
        if (!(i % 24)) {
            printf("\nPress enter to continue...\n");
            while (getchar() != '\n') {
            }
        }
    }
    return 0; 
}
