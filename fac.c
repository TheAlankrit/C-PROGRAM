#include <stdio.h>

int main() {
   int i, n =6, res =1;

   for (i = 1; i <= n; i++) {
      res *= i;
   }

   printf("factorial %d is %d", n, res);
   return 0;
}
