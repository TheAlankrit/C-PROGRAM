#include <stdio.h>

int main() {
   double x=0.7;
   void*p=&x;
   printf("%lx\n",*(long*)p>>52);


    return 0;
}
