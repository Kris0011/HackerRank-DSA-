#include <stdio.h>

int isLeap(int year) {
    // Check if year is a leap year in the Julian calendar
    if (year <= 1917) {
        return year % 4 == 0;
    }
    // Check if year is a leap year in the Gregorian calendar
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

void dayOfProgrammer(int year) {
    int day = 256;
    int feb;
    if(year == 1918) {
        feb = 15;
    }
    else if(isLeap(year)) {
        feb = 29;
    }
    else{
        feb = 28;
    }
    int days_in_months[] = {31, feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 0;
    while (day > days_in_months[month]) {
        day -= days_in_months[month];
        month++;
    }
    printf("%02d.%02d.%04d", day, month + 1, year);
}

int main() {
    int year;
    scanf("%d",&year);
    dayOfProgrammer(year);
    return 0;
}
