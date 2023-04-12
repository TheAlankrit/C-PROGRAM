#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char str[17] = "hello"; // 16 characters + null terminator
    int i, j, dir;

    str[16] = '\0'; // ensure string is null-terminated

    while (1) { // loop forever
        printf("#");
        for (i = 0; i < 16; i++) {
            if (i < strlen(str)) {
                printf("%c", str[(i+j) % strlen(str)]);
            } else {
                printf(" ");
            }
        }
        printf("#\r");
        fflush(stdout);

        if (dir == 0) {
            j++;
            if (j == strlen(str)) {
                dir = 1;
            }
        } else {
            j--;
            if (j == 0) {
                dir = 0;
            }
        }
 sleep(2); // wait for 200 ms
    }

    return 0;
}


