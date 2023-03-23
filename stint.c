#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char String[20];
    printf("Enter a String\n");
    gets(String);
 
    printf("Integer: %d \n", atoi(String));
 
    return 0;
}