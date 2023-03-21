#include <stdio.h>

int main() {
   int n , i, f1 = 0, f2 = 1, nex;
   printf("enter any number");
   scanf("%d",&n);

   printf("fibonacci Series  %d terms: \n", n);

   for (i = 1; i <= n; i++) {
      printf("%d, ", f1);
      nex = f1 + f2;
      f1 = f2;
      f2 = nex;
   }

   return 0;
}
