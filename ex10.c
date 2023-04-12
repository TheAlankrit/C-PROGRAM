#include <stdio.h>

int main() {
    int  num, digit, min_digit, max_digit;
        printf("Enter integer ");
        scanf("%d", &num);
        if(num<10){
            printf("Not valid");
        }else{

        min_digit = 9;  // initialize minimum digit to highest possible value
        max_digit = 0;  // initialize maximum digit to lowest possible value

        while (num != 0) {
            digit = num % 10;
            if (digit < min_digit) {
                min_digit = digit;
            }
            if (digit > max_digit) {
                max_digit = digit;
            }
            num /= 10;
        }

        // if (min_digit == 9 || max_digit == 0) {
        //     printf("not valid\n");
            
        // }


        printf("Minimum digits: ");
        printf("%d ", min_digit);
        printf("\n");

        printf("Maximum digits: ");
        printf("%d ", max_digit);
        printf("\n");
    
        }
    return 0;
}
