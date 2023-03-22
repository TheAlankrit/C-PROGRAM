#include <stdio.h>

int main() {
    int sy , ey , count = 0;
    printf("enter Start year");
    scanf("%d",&sy);

    printf("enter end year");
    scanf("%d",&ey);

    for(int i = sy; i <= ey; i++) {
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            count++;
            printf("%d is a leap year\n", i);
        }
    }

    printf("number of leap years between %d and %d is %d", sy, ey, count);

    return 0;
}

