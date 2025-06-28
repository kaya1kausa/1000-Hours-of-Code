#include <stdio.h> // For printf
#include <string.h> // For strcpy

// 1. Define the 'blueprint' for a game character using 'struct' keyword
struct GameCharacter {
    char name[50];
    int health;
    int attackPower;
    int level;
}; // Don't forget the semicolon here!

// NEW FUNCTION: Takes a POINTER to a GameCharacter struct
void printCharacterStats(struct GameCharacter *characterPtr) {
    printf("--- Character Stats (via Pointer) ---\n");
    // Use '->' operator to access members via a struct pointer
    printf("Name: %s\n", characterPtr->name);
    printf("Health: %d\n", characterPtr->health);
    printf("Attack Power: %d\n", characterPtr->attackPower);
    printf("Level: %d\n", characterPtr->level);
    printf("-----------------------------------\n");
}

int main() {
    // 2. Create variables (instances) of our 'struct GameCharacter' type
    struct GameCharacter protagonist;
    struct GameCharacter bossEnemy;

    // 3. Accessing and initializing members of the struct using the '.' operator
    strcpy(protagonist.name, "Kaya, The Time Weaver");
    protagonist.health = 150;
    protagonist.attackPower = 25;
    protagonist.level = 5;

    strcpy(bossEnemy.name, "Chronos Devourer");
    bossEnemy.health = 300;
    bossEnemy.attackPower = 40;
    bossEnemy.level = 10;

    // 4. Calling the function to print stats, passing the ADDRESS of each character
    printCharacterStats(&protagonist); // Pass the address of protagonist
    printCharacterStats(&bossEnemy);   // Pass the address of bossEnemy

    return 0;
}