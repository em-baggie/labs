#include <stdio.h>
#include <inttypes.h> 
#include <stdint.h>

int main(void) {
    int32_t x = 123;        
    uint64_t y = 456789; 
    printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y);
}