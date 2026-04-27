#include <stdio.h>
#include <string.h>
#include "struct.h"

void printAll(CINEMA films[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s | %02d:%02d | %d min | %s | %d\n",
            films[i].name,
            films[i].hour,
            films[i].minute,
            films[i].duration,
            films[i].genre,
            films[i].budget);
    }
}

void findMinMax(CINEMA films[], int n) {
    int min = 0, max = 0;

    for (int i = 1; i < n; i++) {
        if (films[i].duration < films[min].duration) min = i;
        if (films[i].duration > films[max].duration) max = i;
    }

    printf("\nMin duration: %s\n", films[min].name);
    printf("Max duration: %s\n", films[max].name);
}

void before18(CINEMA films[], int n) {
    printf("\nBefore 18:00 and <90 min:\n");

    for (int i = 0; i < n; i++) {
        if (films[i].hour < 18 && films[i].duration < 90) {
            printf("%s\n", films[i].name);
        }
    }
}

void comedyMaxBudget(CINEMA films[], int n) {
    int max = -1;

    for (int i = 0; i < n; i++) {
        if (strcmp(films[i].genre, "Comedy") == 0) {
            if (max == -1 || films[i].budget > films[max].budget)
                max = i;
        }
    }

    if (max != -1)
        printf("\nBest comedy: %s\n", films[max].name);
}
