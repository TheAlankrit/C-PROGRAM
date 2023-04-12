#include <stdio.h>

int deleteDigit(int num, int digit) {
    int res = 0;
    int pos = 1;

    while (num > 0) {
        int rem = num % 10;
        if (rem != digit) {
            res += rem * pos;
            pos *= 10;
        }
        num /= 10;
    }

    return res;
}

int main() {
    int num, digit, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a digit to delete: ");
    scanf("%d", &digit);

    while (num > 0) {
        int deleted = deleteDigit(num, digit);
        if (deleted > max) {
            max = deleted;
        }
        num /= 10;
    }

    printf("The largest number after deleting %d is: %d\n", digit, max);

    return 0;
}
