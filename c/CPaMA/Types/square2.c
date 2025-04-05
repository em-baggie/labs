/* Prints a table of squares using a for statement */
#include <stdio.h>
int main (void) {
    long i, n;
    printf ("This program prints a table of squares. \n");
    printf ("Enter number of entries in table: ");
    scanf ("%ld", &n) ;
    for (i = 1; i <=n; i++)
    printf ("%20ld%20ld\n", i, i * i);
    return 0; 
}

// note these types are SIGNED
// 16 --> 32767 --> sqrt = 181
// 32 --> 2,147,483,647 --> sqrt = 46340
// 64 --> 9,223,372,036,854,775,807 --> squrt = 3037000499

// For int - minimum value of n before failure is 46340 so int is stored in 32 bits
// For short - minimum value of n before failure 181 so short is stored in 16 bits
// For long - minimum value of n before failure 3037000499 so long is stored in 64 bits