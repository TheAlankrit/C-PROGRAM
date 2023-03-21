#include <stdio.h>

int main() {
   int n, r, i, nume = 1, deno = 1;
   printf("enter n");
   scanf("%d",&n);
   printf("enter r");
   scanf("%d",&r);

   for(i = 1; i <= r; i++) {
      nume *= (n-i+1);
      deno *= i;
   }

   int ncr = nume/deno;
   printf("%d ncr %d = %d", n, r, ncr);

   return 0;
}
