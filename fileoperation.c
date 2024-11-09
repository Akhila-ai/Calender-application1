#include "calendar_application.h"

void saveDataToFile(char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Error opening file for saving");
        return;
    }
    fwrite(&reminderCount, sizeof(int), 1, file);
    fwrite(reminders, sizeof(Reminder), reminderCount, file);
    fclose(file);
    printf("Data saved to file.\n");
}

void loadDataFromFile(char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file for loading");
        return;
    }
    fread(&reminderCount, sizeof(int), 1, file);
    fread(reminders, sizeof(Reminder), reminderCount, file);
    fclose(file);
    printf("Data loaded from file.\n");
}
