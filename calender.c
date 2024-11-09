#include "calendar_application.h"
void showCalendar(int month, int year) {
    printf("\nCalendar for %d/%d\n", month, year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    struct tm firstDay = {0};
    firstDay.tm_mday = 1;
    firstDay.tm_mon = month - 1;
    firstDay.tm_year = year - 1900;
    mktime(&firstDay);

    int startDay = firstDay.tm_wday;
    int daysInMonth = getDaysInMonth(month, year);

    for (int i = 0; i < startDay; i++) {
        printf("    ");
    }

    for (int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);
        if ((day + startDay) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    return daysInMonth[month - 1];
}

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
