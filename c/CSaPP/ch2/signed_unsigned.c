#include <stdio.h>

int main(void) {
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);
}

// effect of casting is to keep the bit values identical but change how these bits are interpreted
// the 16-bit two’s-complement representation of −12,345 is identical to the 16-bit unsigned representation of 53,191.