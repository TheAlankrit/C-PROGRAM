#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 10;
      void *p = &i;
      printf("%d\n", (int)*p);
    // int i = 10;
    //   void *p = &i;
    //   printf("%f", *(float *)p);
    return 0;
}
