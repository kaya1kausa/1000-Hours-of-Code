#include <stdio.h>

void displayPlayerInfo(char name[], int level);

int main() {
    printf("Displaying player profiles:\n");
    displayPlayerInfo("Kaya, the Time Weaver", 5);
    displayPlayerInfo("Zenith, the Chronos Knight", 10);
    return 0;
}

void displayPlayerInfo(char name[], int level) {
    printf("Player: %s | Level: %d\n", name, level);
}