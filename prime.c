#include <stdio.h>

int main() {
    
   int n , res= 1;
   printf("enter any Number");
   scanf("%d",&n);

   for(int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         res = 0;
         break;
      }
   }

   if(res == 1) {
      printf("%d prime number", n);
   }else {
      printf("%d not prime number", n);
   }

   return 0;
}
