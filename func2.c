#include<stdio.h>
int square(int n) {
    return n * n;
}
int main() {
    int x = 5;
    int res = square(x);
    printf("Square %d  %d\n", x, res);
    return 0;
}
