#include<stdio.h>
void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main() {
    int a = 3, b = 5;
    printf("B S\n");
    printf("a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("A S\n");
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
