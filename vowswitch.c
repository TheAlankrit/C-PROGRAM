#include <stdio.h>
#include <ctype.h> // required for isalpha() function

int main() {
    char ch;
    printf("Enter a character");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        ch = toupper(ch);
        switch(ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c vowel", ch);
                break;
            default:
                printf("%c consonant", ch);
        }
    }
    else {
        printf("%c non alphabet", ch);
    }
    return 0;
}
