// main.c - Main entry point for the Chronos Character Management System

#include <stdio.h>   // For standard input/output functions like printf
#include "character.h" // For our custom Character struct, functions, and new File I/O functions
#include <stdbool.h> // For using 'bool', 'true', 'false'
#include <stdlib.h>  // For dynamic memory allocation (malloc, free)
#include <string.h>  // For strcmp (used in character.c, but good to include if any string ops here)


// The ONE AND ONLY main function: The program's entry point and orchestrator
int main() {
    printf("--- Chronos Character Management System ---\n\n");

    Character **allCharacters = NULL; // Pointer to array of Character pointers
    int characterCount = 0;           // Number of characters in the array

    // *** Attempt to Load ALL Characters from File ***
    // loadAllCharacters will return a new Character** array and update characterCount
    printf("Attempting to load characters from file (chronos_characters.txt)...\n");
    allCharacters = loadAllCharacters("chronos_characters.txt", &characterCount);

    // If loading failed or no characters were found in the file:
    if (allCharacters == NULL || characterCount == 0) {
        printf("No existing characters found or failed to load. Creating default characters.\n");
        // Create 2 default characters dynamically from scratch.
        characterCount = 2; // We'll start with 2 default characters for demonstration.

        // Allocate memory for the array of Character pointers itself.
        allCharacters = (Character **) malloc(characterCount * sizeof(Character *));
        if (allCharacters == NULL) {
            printf("Error: Failed to allocate memory for default character array!\n");
            return 1; // Exit if critical memory allocation fails.
        }

        // Allocate memory for each individual Character struct and initialize.
        for (int i = 0; i < characterCount; i++) {
            allCharacters[i] = (Character *) malloc(sizeof(Character));
            if (allCharacters[i] == NULL) {
                printf("Error: Failed to allocate memory for default character %d!\n", i);
                // Clean up any characters already allocated before failing and exiting.
                for (int j = 0; j < i; j++) { free(allCharacters[j]); }
                free(allCharacters);
                return 1;
            }
        }

        // Initialize the default characters using their allocated memory.
        initializeCharacter(allCharacters[0], "Kaya", 100, 15, 5, 1);
        initializeCharacter(allCharacters[1], "Temporal Rift Echo", 80, 10, 3, 1);

    } else {
        printf("Characters loaded successfully. Total: %d\n", characterCount);
    }

    printf("\nCharacters initialized. Total: %d\n", characterCount);

    // Print stats for all characters, whether loaded or newly created.
    for (int i = 0; i < characterCount; i++) {
        printCharacterStats(allCharacters[i]);
    }

    printf("\n--- COMMENCING BATTLE! ---\n");
    int round = 1;

    // Assuming we always have at least 2 characters for battle for this demo.
    // For a real game, you'd add more sophisticated logic to select combatants from the array.
    Character *playerPtr = allCharacters[0]; // Kaya is typically the first character.
    Character *enemyPtr = allCharacters[1];  // Enemy is typically the second character.

    // Basic check to ensure we have valid combatants for the battle.
    if (characterCount < 2 || playerPtr == NULL || enemyPtr == NULL) {
         printf("Not enough characters loaded or created for battle. Skipping battle.\n");
         // The program will proceed to cleanup and exit normally.
    } else {
        do {
            printf("\n--- Round %d ---\n", round);

            // Player attacks enemy
            attackCharacter(playerPtr, enemyPtr);
            if (!enemyPtr->isAlive) { // Check if enemy was defeated after player's attack.
                printf("Battle concluded! %s is victorious!\n", playerPtr->name);
                break; // Exit the battle loop.
            }

            // Enemy attacks player (only if enemy is still alive)
            attackCharacter(enemyPtr, playerPtr);
            if (!playerPtr->isAlive) { // Check if player was defeated after enemy's attack.
                printf("Battle concluded! %s has fallen!\n", playerPtr->name);
                break; // Exit the battle loop.
            }

            round++;
        } while (playerPtr->isAlive && enemyPtr->isAlive); // Loop as long as BOTH are alive.
    }

    printf("\n--- BATTLE ENDED ---\n");
    // Print final stats for all characters, reflecting any changes from the battle.
    for (int i = 0; i < characterCount; i++) {
        printCharacterStats(allCharacters[i]);
    }

    // *** Save ALL Characters to file ***
    // This function will iterate through allCharacters and save their current states.
    saveAllCharacters(allCharacters, characterCount, "chronos_characters.txt");

    // *** CRITICAL: Free all dynamically allocated memory! ***
    // First, loop through the array and free each individual Character struct that was allocated.
    for (int i = 0; i < characterCount; i++) {
        if (allCharacters[i] != NULL) { // Safety check before freeing.
            free(allCharacters[i]);
            allCharacters[i] = NULL; // Prevent dangling pointer after freeing.
        }
    }
    // Then, free the array of Character pointers itself.
    if (allCharacters != NULL) {
        free(allCharacters);
        allCharacters = NULL; // Prevent dangling pointer after freeing the array.
    }

    return 0; // Program finished successfully.
}