#include <stdio.h>   // For printf
#include <string.h>  // For strncpy (to safely copy strings)

// 1. Define the 'blueprint' for a game character
// This struct will hold a character's name, health, and attack power
struct GameCharacter {
    char name[50];        // Character's name (a string)
    int health;           // Character's current health points
    int attackPower;      // Character's attack strength
};

// 2. Function Declaration (Prototype):
// Tells the compiler about our display function.
// It takes a 'struct GameCharacter' as input and returns nothing ('void').
void displayCharacterStats(struct GameCharacter character_data);

// 3. Main function: The program's entry point
int main() {
    printf("--- 1KAUSA Character Roster ---\n");

    // Create two GameCharacter variables (instances of our struct)
    struct GameCharacter protagonist;
    struct GameCharacter boss_enemy;

    // Initialize the Protagonist's stats
    strncpy(protagonist.name, "Kaya, The Time Weaver", sizeof(protagonist.name) - 1);
    protagonist.name[sizeof(protagonist.name) - 1] = '\0'; // Ensure null-termination
    protagonist.health = 150;
    protagonist.attackPower = 25;

    // Initialize the Boss Enemy's stats
    strncpy(boss_enemy.name, "Chronos Devourer", sizeof(boss_enemy.name) - 1);
    boss_enemy.name[sizeof(boss_enemy.name) - 1] = '\0'; // Ensure null-termination
    boss_enemy.health = 300;
    boss_enemy.attackPower = 40;

    // Call the function to display stats for the Protagonist
    printf("\n--- Protagonist Stats ---\n");
    displayCharacterStats(protagonist);

    // Call the function to display stats for the Boss Enemy
    printf("\n--- Boss Enemy Stats ---\n");
    displayCharacterStats(boss_enemy);

    return 0; // Indicate successful program execution (this is for main only!)
}

// 4. Function Definition: This is what the displayCharacterStats function does
void displayCharacterStats(struct GameCharacter character_data) {
    printf("Name: %s\n", character_data.name);
    printf("Health: %d\n", character_data.health);
    printf("Attack Power: %d\n", character_data.attackPower);
    // No 'return 0;' here because this is a 'void' function!
}