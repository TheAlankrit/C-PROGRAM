#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    while (*str) {
        if (isupper(*str))
            *str = tolower(*str);
        else if (islower(*str))
            *str = toupper(*str);
        str++;
    }
}

int main() {
    char str1[] = "Hello World";
    
    printf("Input String: %s\n", str1);
    toggleCase(str1);
    printf("Output String: %s\n", str1);
    
    return 0;
}
