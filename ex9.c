#include <stdio.h>

void print_count() {
    for (int i = 0; i < 100; i++) {
        printf("%3d ", i);
    }
}

int main() {
    print_count();
    return 0;
}
