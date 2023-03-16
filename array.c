#include <stdio.h>

int main() {
    int arr[3];
    int i = 0;
    printf("Enter elements");
    for(i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements\n");
    i = 0;
    while(i<3) {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
