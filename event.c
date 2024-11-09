#include "calendar_application.h"

void scheduleEvent() {
    int eventIndex;
    char eventMessage[MAX_MESSAGE_LENGTH];

    printf("Enter event index (0-%d): ", MAX_REMINDERS - 1);
    scanf("%d", &eventIndex);
    getchar();

    printf("Enter event message: ");
    fgets(eventMessage, sizeof(eventMessage), stdin);
    eventMessage[strcspn(eventMessage, "\n")] = '\0';

    if (eventIndex >= 0 && eventIndex < MAX_REMINDERS) {
        strncpy(events[eventIndex].message, eventMessage, MAX_MESSAGE_LENGTH - 1);
        printf("Event scheduled: %s\n", events[eventIndex].message);
    } else {
        printf("Invalid event index.\n");
    }
}
