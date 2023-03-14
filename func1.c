#include<stdio.h>
int add(int n1, int n2) {
    return n1 + n2;
}
int main() {
    int a = 3, b = 5;
    int sum = add(a, b);
    printf("Add %d %d is %d\n", a, b, sum);
    return 0;
}
