#include <stdio.h>

// void print_bits(unsigned int x) {
//     for (int i = 31; i >= 0; i--) {
//         printf("%d", (x >> i) & 1);
//     }
//     printf("\n");
// }

// int main() {
//     unsigned int x;
//     printf("Enter a 32-bit integer: ");
//     scanf("%u", &x);
//     printf("Bits of %u: ", x);
//     print_bits(x);
//     return 0;
// }
#include <stdio.h>

void print_clear_bits(unsigned int x) {
    for (int i = 31; i >= 0; i--) {
        if ((x >> i) & 1) {
            printf("1");
        } else {
            printf("-");
        }
    }
    printf("\n");
}

int main() {
    unsigned int x;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &x);
    printf("Clear bits of %u: ", x);
    print_clear_bits(x);
    return 0;
}

