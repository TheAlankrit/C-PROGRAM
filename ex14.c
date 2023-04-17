#include <stdio.h>

int main() {
  const int x = 10;
  const int *p = &x;    // pointer to a constant integer
  printf("%d\n", *p);   // prints the value of x, i.e., 10
  // *p = 20;          // invalid assignment, cannot modify the value of x through p
  p++;                  // valid assignment, p can be modified to point to the next memory location
  printf("%d\n", *p); 
    printf("%d",&p);               // prints the garbage value, because p points to an invalid memory location
  return 0;
}
