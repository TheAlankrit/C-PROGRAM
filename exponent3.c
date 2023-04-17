#include <stdio.h>
#include <stdint.h>

int main() {
    double num = 0.7;
    uint64_t bits = *(uint64_t*)&num;
    uint64_t exp_mask = 0x7FF0000000000000;
    uint64_t exp = (bits & exp_mask) >> 52;

    // Print exponent in hexadecimal format
    printf("Exponent in hexadecimal format: 0x%lx\n", exp);

    // Print exponent in binary format
    printf("Exponent in binary format: ");
    for (int i = 11; i >= 0; i--) {
        if (exp & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
