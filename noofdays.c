#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date_str[11]; 
    int day, month, year, days_elapsed = 0;
    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%s", date_str);
    sscanf(date_str, "%d/%d/%d", &day, &month, &year);
    for (int i = 1; i < month; i++) {
        switch(i) {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                    // leap year (29 days)
                    days_elapsed += 29;
                } else {
                    days_elapsed += 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days_elapsed += 30;
                break;
            default:
                days_elapsed += 31;
                break;
        }
    }
    days_elapsed += day;
    printf("The number of days elapsed from 01/01/%d to %s is %d.", year, date_str, days_elapsed);
    
    return 0;
}
