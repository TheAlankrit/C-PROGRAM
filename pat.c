#include <stdio.h> 
void pattern(int n){
    for(int i=n; i>=1; i--)
 {
  for(int j=1; j<=i; j++){
   printf("%d",j);
  }
  for(int k=i; k<n; k++){
   printf("  ");
  }
  for(int j=i; j>=1; j--){
   printf("%d",j);
  }
  printf("\n");
 }
}

int main()
{
 int n;
 printf("enter th no");
 scanf("%d",&n);
 if(n<=9 && n>=2){
    pattern(n);
 }else{
    printf("enter th no which liew between 2 to 9");
 }

 return 0;
}
