#include <stdio.h>
#include <string.h>
#include "struct.h"

void printStudent(Student s);

int main() {
    Student s;

    s.id = 1;
    strcpy(s.name, "Artem");
    s.grade = 9.5;

    printStudent(s);

    return 0;
}
