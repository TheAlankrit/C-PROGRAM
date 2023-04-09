#include<stdio.h>

int main()
{
    char name[30];
 
    printf("Enter your name\n");
    
    //get string input. Note that We are not using &name here.   
   //fgets(name,10,stdin);
      scanf("%29[^\n]",name);
   //fgets(name, sizeof(name), stdin); 
   
    
    //print the name
    printf("Welcome %s\n",name);
    
    return 0;
}