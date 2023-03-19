#include <stdio.h>

void read_elements(int *a, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

int sum_4bit_part(int *a, int size, int position) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int mask = (1 << 4) - 1;  
        int part = (a[i] >> position) & mask;  
        sum += part;  
    }
    return sum;
}

int main() {
    int size, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    read_elements(a, size);
    printf("Enter the position of the 4-bit part (0-12): ");
    scanf("%d", &position);
    int sum = sum_4bit_part(a, size, position);
    printf("The sum of the 4-bit part at position %d is %d.\n", position, sum);
    return 0;
}
