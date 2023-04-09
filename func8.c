#include<stdio.h>
void copy_array(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i]; 
    }
}
int main() {
    int arr1[] = {22,11,12,12,13,45,33};
    // int n;
    // scanf("%d",&n);
    int arr2[7];
    int si=7;
    copy_array(arr1, arr2, si);
    printf("elements array 1: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr1[i]);
    }
    printf("elements in array 2: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
