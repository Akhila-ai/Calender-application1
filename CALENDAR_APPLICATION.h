#ifndef CALENDAR_APPLICATION_H
#define CALENDAR_APPLICATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_REMINDERS 100
#define MAX_MESSAGE_LENGTH 100

typedef struct {
    int day;
    int month;
    int year;
    char message[MAX_MESSAGE_LENGTH];
} Reminder;

typedef union {
    char message[MAX_MESSAGE_LENGTH];
    int status;  
} Event;

extern Reminder reminders[MAX_REMINDERS];
extern Event events[MAX_REMINDERS];
extern int reminderCount; 

void showMenu();
void showCalendar(int month, int year);
int isLeapYear(int year);
int getDaysInMonth(int month, int year);
void setReminder();
void showReminders();
void scheduleEvent();
void saveDataToFile(char *filename);
void loadDataFromFile(char *filename);
void validateDate(int day, int month, int year);
int isValidDate(int day, int month, int year);  

#endif 
