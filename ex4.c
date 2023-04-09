#include <stdio.h>

int main() {
    char c1, c2, c3;
    int sum;

    printf("Enter three characters: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    sum = (int) c1 + (int) c2 + (int) c3;

    printf("Sum of ASCII values: %d\n", sum);

    return 0;
}
