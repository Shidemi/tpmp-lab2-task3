#include <stdio.h>
#include "struct.h"

int main() {
    CINEMA films[3] = {
        {"Film1", 16, 30, 80, "Comedy", 100},
        {"Film2", 19, 0, 120, "Action", 200},
        {"Film3", 17, 15, 70, "Comedy", 300}
    };

    printAll(films, 3);
    findMinMax(films, 3);
    before18(films, 3);
    comedyMaxBudget(films, 3);

    return 0;
}
