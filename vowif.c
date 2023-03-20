#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    printf("Enter a charactergcc");
    scanf("%c", &ch);
    if (isalpha(ch)){
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c vowel.", ch);
        }
        else {
            printf("%c consonant", ch);
        }
    }
    else {
        printf("%c non alphabet.", ch);
    }
    return 0;
}
