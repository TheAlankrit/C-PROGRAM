#include<stdio.h>


int largest(int a[], int size) {
    int lar = a[0]; 
    for (int i = 1; i < size; i++) {
        if (a[i] > lar) {
            lar = a[i]; 
        }
    }
    return lar;
}
int main() {
    int arr[] = {5,3,2,22,55,44,11};
    int si= 7;
    int res = largest(arr, si);
    printf("largest element in the array %d\n", res);
    return 0;
}
