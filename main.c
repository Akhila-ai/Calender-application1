#include <stdio.h>
#include <stdlib.h>

void showCalendar();
void setReminder();
void scheduleEvent();
void showMenu();

int main() {
    int choice;

    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showCalendar();
                break;
            case 2:
                setReminder();
                break;
            case 3:
                scheduleEvent();
                break;
            case 4:
                printf("Exiting the application.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void showMenu() {
    printf("1. View Calendar\n");
    printf("2. Set Reminder\n");
    printf("3. Schedule Event\n");
    printf("4. Exit\n");
}

void showCalendar() {
    printf("Displaying calendar\n");
}

void setReminder() {
    printf("Setting a reminder\n");
}

void scheduleEvent() {
    printf("Scheduling an event\n");
}
