#include "calendar_application.h"

void showMenu() {
    printf("\n-Console Calendar Application-\n");
    printf("1. View Calendar\n");
    printf("2. Set Reminder\n");
    printf("3. Show Reminders\n");
    printf("4. Schedule Event\n");
    printf("5. Save & Exit\n");
}

int isValidDate(int day, int month, int year) {
    // Bitwise check for valid ranges (using shifts for efficiency)
    return (day > 0 && day <= 31) && (month > 0 && month <= 12) && (year >= 1900);
}
