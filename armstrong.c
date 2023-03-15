#include <stdio.h>
int main() {
    int num, orinum, rem, res = 0;
    printf("enter three digit num");
    scanf("%d", &num);
    orinum = num;

    while (orinum != 0) {
        rem = orinum % 10;
      res += rem* rem* rem;
       orinum/= 10;
    }

    if (res == num)
        printf("%d armstrong number", num);
    else
        printf("%d not an armstrong number", num);

    return 0;
}
