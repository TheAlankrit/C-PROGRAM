#include <stdio.h>
void printString(char *str) {
    printf("%s", str);
}

int main(void) {

char myString[] = "Hello, world!";

    printString(myString);
    //printf("%s",&myString[0]);



//   char name[] = "Harry Potter";

//  // printf("%c", *name);     // Output: H
// //   printf("%c", *(name+1));   // Output: a
// //   printf("%c", *(name+7));   // Output: o

//   char *namePtr;

//   namePtr = name;
//   printf("%c", *namePtr);     // Output: H
//   printf("%c", *(namePtr+1));   // Output: a
//   printf("%c", *(namePtr+7));   // Output: o
}