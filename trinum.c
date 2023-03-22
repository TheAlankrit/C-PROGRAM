#include <stdio.h>

int main() {
    int end;
    long long total = 0;
    
    printf("Enter the end number: ");
    scanf("%d", &end);
    for (int i = 1; i <= end; i++) {
        total += (long long)i*(i+1)/2;
    }
    
    printf("Sum of triangular numbers from 1 to %d is %lld", end, total);
    
    return 0;
}
