#include<stdio.h>
void sqr_and_cube(int n, int *s, int *c) {
    *s = n * n; 
    *c = n * n * n; 
}

int main() {
    int x = 5, squ, cub;
    sqr_and_cube(x, &squ, &cub);
    printf("square  %d %d\n", x, squ);
    printf("cube %d %d\n", x, cub);
    return 0;
}

