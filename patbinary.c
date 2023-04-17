#include <stdio.h>

int main() {
    unsigned char pattern[] = {0x3C, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42};
    // The binary representation of each hex value in the pattern array is:
    // 0x3C = 00111100
    // 0x42 = 01000010
    // 0x81 = 10000001

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            if (pattern[j] & (1 << i)) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
