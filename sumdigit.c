#include <stdio.h>

int main() {
   int n = 674, sum = 0;

   while (n != 0) {
      int rem = n % 10;
      sum += rem;
      n /= 10;
   }

   printf("sum digit is %d", sum);
   return 0;
}
