#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int i = 10;
    // int *p;
    //  p = &i;
    //   printf("%d",*p);
   float i = 10;
      void *p = &i;
      printf("%f", *(float*)p);
    return 0;
}
