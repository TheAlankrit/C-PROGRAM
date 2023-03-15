#include<stdio.h>
int main()
{
    /* code */
    char *str1 = "Hello"; 
char str2[] = "World"; 

//str1[0] = 'h'; 
str2[0] = 'w'; 

str1++; 
//str2++;
printf("%s\n", str1); // This prints "ello"
printf("%s\n", str2); // This prints "world"

   // return 0;
}
