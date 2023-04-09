#include <stdio.h>

int digital_root(int num) {
    int sum = 0;

    // Compute the sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    if (sum > 9) {
        return digital_root(sum);
    }
    return sum;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Compute the digital root of the number
    int root = digital_root(num);

    printf("The digital root of %d is %d\n", num, root);

    return 0;
}
