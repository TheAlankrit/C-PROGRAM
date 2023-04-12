#include <stdio.h>
#include <string.h>
#include <unistd.h>

void marquee_print(const char* text, int width) {
    int len = strlen(text);
    char buffer[2 * len + width];
    memset(buffer, ' ', sizeof(buffer));  // fill with spaces
    strncpy(buffer, text, len);  // copy text to buffer
    int counter = 0;
    while (1) {
        printf("%.*s", width, buffer + counter);  // print current portion
        counter++;
        if (counter >= len + width) {
            counter = 0;  // reset counter
        }
        fflush(stdout);  // flush output
       // usleep(100000);  // wait for 100ms
    }
}

int main() {
    marquee_print("Hello, world!", 10);
    return 0;
}
