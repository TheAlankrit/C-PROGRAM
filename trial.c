#include <stdio.h>
int main(){

int i;
i =0;
do{
break;
printf("%din", i++);
}
while (i++ < 10);
printf("%d\n", ++i);
return 0;
}

