#include<stdio.h>
int main() {
//     int **a;
//   int i = 10;
//   void *p = &i;
//   printf("%d\n", *(int*)p);
int *p,c;
c=5;
p=&c;
*p=6;
printf("%d ",c);
printf("%d",&p);
  return 0;



//   int *p;    // uninitialized pointer
//   printf("%d\n", *p);    // dereferencing wild pointer
//   return 0;


}