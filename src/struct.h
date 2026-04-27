#ifndef STRUCT_H
#define STRUCT_H

typedef struct {
    char name[50];
    int hour;
    int minute;
    int duration; // в минутах
    char genre[30];
    int budget;
} CINEMA;

void printAll(CINEMA films[], int n);
void findMinMax(CINEMA films[], int n);
void before18(CINEMA films[], int n);
void comedyMaxBudget(CINEMA films[], int n);

#endif

