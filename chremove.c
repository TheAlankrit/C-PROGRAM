#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* rrechar(char* s, char c) {
    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            count++;
            if (count > 1) {
                for (int j = i; j < n - 1; j++) {
                    s[j] = s[j + 1];
                }
                s[n - 1] = '\0';
                n--;
                i--;
            }
        }
    }
    return s;
}


int main() {
    char str[100];
    char c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to remove duplicates: ");
    scanf(" %c", &c);
    printf("Original string: %s\n", str);
    rrechar(str, c);
    printf("Modified string: %s\n", str);
    return 0;
}
