#include "calendar_application.h"

void setReminder() {
    if (reminderCount >= MAX_REMINDERS) {
        printf("Maximum reminder limit reached.\n");
        return;
    }

    int day, month, year;
    char message[MAX_MESSAGE_LENGTH];
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    if (!isValidDate(day, month, year)) {
        printf("Invalid date entered.\n");
        return;
    }

    printf("Enter reminder message: ");
    getchar(); 
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    reminders[reminderCount++] = (Reminder){day, month, year, ""};
    strncpy(reminders[reminderCount - 1].message, message, MAX_MESSAGE_LENGTH - 1);

    printf("Reminder set for %d/%d/%d.\n", day, month, year);
}

void showReminders() {
    printf("\nAll Reminders:\n");
    for (int i = 0; i < reminderCount; i++) {
        printf("Date: %02d/%02d/%d - %s\n", reminders[i].day, reminders[i].month, reminders[i].year, reminders[i].message);
    }
}
