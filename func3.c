#include<stdio.h>
int even_or_odd(int n) {
    if (n % 2 == 0) {
        return 0; 
    } else {
        return 1; 
    }
}
int main() {
    int x = 4;
    int res = even_or_odd(x);
    if (res == 0) {
        printf("%d = even\n", x);
    } else {
        printf("%d = odd\n", x);
    }
    return 0;
}

