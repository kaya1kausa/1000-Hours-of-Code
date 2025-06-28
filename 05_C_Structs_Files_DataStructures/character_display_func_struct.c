#include <stdio.h>   // Required for printf
#include <string.h>  // Required for strncpy (to safely copy strings)

// 1. Define the 'blueprint' for a game character using a struct
// This struct groups related data (name, health, attack power, level)
// under a single, custom data type name: GameCharacter.
struct GameCharacter {
    char name[50];        // Character's name (a string, max 49 chars + null terminator)
    int health;           // Character's current health points
    int attackPower;      // Character's attack strength
    int level;            // Character's experience level
};

// 2. Function Declaration (Prototype):
// This tells the compiler that a function named 'displayCharacterStats' exists.
// It specifies that the function takes one argument: a 'struct GameCharacter'.
// The 'void' keyword indicates that this function does not return any value.
void displayCharacterStats(struct GameCharacter character_data); // 'character_data' is the parameter name

// 3. Main function: The program's entry point
// Execution of the program begins here.
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

    // Call the 'displayCharacterStats' function for the Protagonist.
    // We pass the entire 'protagonist' struct variable to the function.
    printf("\n--- Protagonist Stats ---\n");
    displayCharacterStats(protagonist);

    // Call the 'displayCharacterStats' function for the Boss Enemy.
    // We pass the entire 'boss_enemy' struct variable to the function.
    printf("\n--- Boss Enemy Stats ---\n");
    displayCharacterStats(boss_enemy);

    printf("\n--- Character display complete! ---\n");

    // Return 0 from main to indicate that the program executed successfully.
    // This is a standard convention for 'int main()'.
    return 0;
}

// 4. Function Definition: This is the actual code that runs when
// 'displayCharacterStats' is called.
// It receives a copy of the 'struct GameCharacter' data (named 'character_data'
// within this function's scope).
// Since it's a 'void' function, it performs an action (printing) but does not
// return any value back to the calling function (main).
// 4. Function Definition: This is what the displayCharacterStats function does
void displayCharacterStats(struct GameCharacter character_data) {
    printf("Name: %s\n", character_data.name);
    printf("Health: %d\n", character_data.health);
    printf("Attack Power: %d\n", character_data.attackPower);
}



