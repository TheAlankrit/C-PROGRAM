#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 long comp(char *timeStr) {
    char *ti;
    unsigned long hh, mm, ss;
    ti = strtok(timeStr, ":");
    hh = strtoul(ti, NULL, 10);
    ti = strtok(NULL, ":");
    mm = strtoul(ti, NULL, 10);
    ti= strtok(NULL, ":");
    ss = strtoul(ti, NULL, 10);

    return hh * 3600 + mm * 60 + ss;
}

int main() {
    char Str1[] = "10:12:50";
   
    
    printf("Time String %s\n", Str1);
    printf("Total Seconds %lu\n", comp(Str1));

    
    return 0;
}

