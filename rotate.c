#include <stdio.h>
#include <string.h>

void rot(char *str, int n, char move) {
    int len = strlen(str);
    n = (n % len + len) % len;
    
    if (move== 'L' || move == 'l') {
        // Rotate left
        for (int i = 0; i < n; i++) {
            char temp = str[0];
            memmove(str, str + 1, len - 1);
            str[len - 1] = temp;
        }
    }
    else if (move == 'R' || move== 'r') {
        for (int i = 0; i < n; i++) {
            char temp = str[len - 1];
            memmove(str + 1, str, len - 1);
            str[0] = temp;
        }
    }
}

int main() {
    char str1[] = "abcdxyz";
   
    printf("Input String: %s\n", str1);
    rot(str1, 2, 'L');
    printf("Left Rotation by 2: %s\n", str1);
    
    return 0;
}
