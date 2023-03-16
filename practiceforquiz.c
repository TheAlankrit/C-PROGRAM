#include <stdio.h>

int main() {
    int i;

    for(i = -100; i <= 200; i++) {
        printf("%d ", i);
    }
 printf("\n");
 printf("\n");

    printf("Using a while loop:\n");
    i = -100;
    while(i <= 200) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("\n");

    printf("Using a do-while loop:\n");
    i = -100;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 200);
    printf("\n");
    printf("\n");

    return 0;
}






