#include <stdio.h>

int count_bits_set(unsigned int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int a[] = {0x01, 0xF4, 0x10001};
    int n = sizeof(a) / sizeof(unsigned int);
    int total_bits_set = 0;

    for (int i = 0; i < n; i++) {
        total_bits_set += count_bits_set(a[i]);
    }

    printf("Total number of bits set in the array: %d\n", total_bits_set);

    return 0;
}
