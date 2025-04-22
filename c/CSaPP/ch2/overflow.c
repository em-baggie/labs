// checks for overflow when adding two unsigned numbers

#include <stdio.h>

int uad_ok (unsigned x, unsigned y);

int main(void) {
    printf("%u", uad_ok(5, 9));
}

int uad_ok (unsigned x, unsigned y) {
    unsigned add = x + y;
    return add >= x;
}

// also works with return add >= y