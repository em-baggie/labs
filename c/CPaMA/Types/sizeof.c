// %zu --> u stands for unsigned, z means type size_t

#include <stdio.h>

int main (void) {
    
    printf("size of int: %zu\n", sizeof(int));
    printf("size of short: %zu\n", sizeof(short));
    printf("size of long: %zu\n", sizeof(long));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double: %zu\n", sizeof(long double));

    return 0;
}