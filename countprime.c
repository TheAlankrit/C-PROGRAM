#include<stdio.h>

int main()
{
	 int min, max, flag, count=0, i, j;
	 printf("Enter minimum number\n");
	 scanf("%d", &min);
	 printf("Enter maximum number\n");
	 scanf("%d", &max);
	 
	 for(i=min; i<=max; i++)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    flag=1;
				    break;
			   }
		  }
		  if(flag==0 && i>=2)
		  {
		   	count++;
		  }
	 }
	 printf("Prime Count = %d", count);
	 return 0;
}