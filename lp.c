#include <stdio.h>

int main() {
    int ye;

    printf("Enter year");
    scanf("%d", &ye);

    if ((ye % 4 == 0 && ye % 100 != 0) || (ye % 400 == 0)) {
        printf("%d leap year\n", ye);
    } else {
        printf("%d not leap year\n", ye);
    }

    return 0;
}


