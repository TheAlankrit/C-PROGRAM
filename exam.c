#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    scanf("%d",&num);
    char numStr[5];
    sprintf(numStr, "%d", num);
    int maxNum = -1;

    for (int i = 0; i < strlen(numStr); i++) {
        char newNumStr[4];
        int index = 0;
        for (int j = 0; j < strlen(numStr); j++) {
            if (j != i) {
                newNumStr[index++] = numStr[j];
            }
        }
        newNumStr[index] = '\0';

        int newNum = atoi(newNumStr);
        if (newNum > maxNum && newNum >= 100 && newNum <= 999) {
            maxNum = newNum;
        }
    }

    printf("The biggest three-digit number by deleting a single digit from %d is: %d\n", num, maxNum);
    return 0;
}
