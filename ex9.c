#include <stdio.h>

// void print_count() {
//     for (int i = 0; i < 100; i++) {
//         printf("%3d ", i);
//     }
// }
void print_count(){
    char c[5]="0000";
    for (int i = 0; i <=9; i++)
    {
      c[0]=i+'0';
      for(int j=0;j<=9;j++){
        c[1]=j+'0';
        for (int k = 0; k <=9; k++)
        {
            c[2]=k+'0';
            for (int l = 0; l <=9; l++)
            {
                c[3]=l+'0';
                printf("%s ",c);
            }
            
        }
        
      }
    }
    
}
int main() {
    print_count();
    return 0;
}
