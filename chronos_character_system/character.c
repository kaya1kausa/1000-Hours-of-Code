// character.c - Implementation file for Chronos Character System functions

#include "character.h" // Include our own header file (this brings in all structs and prototypes)

// Function to initialize a character's stats
// characterPtr: A pointer to the Character struct to be initialized.
// name, health, attack, defense, level: The initial stats for the character.
void initializeCharacter(Character *characterPtr, const char *name, int health, int attack, int defense, int level) {
    if (characterPtr == NULL) { // Safety check: Ensure the pointer is valid.
        printf("Error: Cannot initialize a NULL character pointer.\n");
        return;
    }
    strncpy(characterPtr->name, name, sizeof(characterPtr->name) - 1);
    characterPtr->name[sizeof(characterPtr->name) - 1] = '\0';
    characterPtr->health = health;
    characterPtr->attackPower = attack;
    characterPtr->defense = defense;
    characterPtr->level = level;
    characterPtr->isAlive = true; // New characters start as alive.
    printf("%s has been created!\n", characterPtr->name);
}

// Function to print a Character's stats
// characterPtr: A pointer to the Character struct whose stats are to be printed.
void printCharacterStats(Character *characterPtr) {
    if (characterPtr == NULL) { // Safety check.
        printf("Error: Cannot print stats for a NULL character pointer.\n");
        return;
    }
    printf("\n--- %s's Stats ---\n", characterPtr->name);
    printf("Level: %d\n", characterPtr->level);
    printf("Health: %d\n", characterPtr->health);
    printf("Attack: %d\n", characterPtr->attackPower);
    printf("Defense: %d\n", characterPtr->defense);
    // Display status using the ternary operator: (condition ? value_if_true : value_if_false)
    printf("Status: %s\n", characterPtr->isAlive ? "Alive" : "Defeated");
    printf("-----------------------\n");
}

// Function to simulate an attack from one character to another
// attacker: Pointer to the attacking Character.
// target: Pointer to the Character being attacked.
void attackCharacter(Character *attacker, Character *target) {
    if (attacker == NULL || target == NULL) { // Safety check for valid pointers.
        printf("Error: Invalid character pointer for attack.\n");
        return;
    }
    if (!attacker->isAlive) {
        printf("%s cannot attack, as they are defeated!\n", attacker->name);
        return;
    }
    if (!target->isAlive) {
        printf("%s tries to attack %s, but %s is already defeated!\n", attacker->name, target->name, target->name);
        return;
    }

    printf("\n--- %s Attacks %s! ---\n", attacker->name, target->name);

    int damageDealt = attacker->attackPower - target->defense;
    // Ensure at least 1 damage is dealt, even if defense is very high.
    if (damageDealt < 1) {
        damageDealt = 1;
    }

    printf("%s deals %d damage to %s.\n", attacker->name, damageDealt, target->name);

    target->health -= damageDealt; // Reduce target's health directly via pointer.

    printf("%s's health is now: %d\n", target->name, target->health);

    // Check if the target has been defeated.
    if (target->health <= 0) {
        target->isAlive = false; // Mark target as not alive.
        printf("%s has been defeated by %s!\n", target->name, attacker->name);
    }
    printf("---------------------------\n");
}

// --- NEW: Function to save all characters to a file ---
// 'characters': A pointer to an array of Character pointers.
// 'count': The number of characters in the array.
// 'filename': The name of the file to save to.
void saveAllCharacters(Character **characters, int count, const char *filename) {
    FILE *filePtr = fopen(filename, "w"); // Open in write mode, overwrites if exists.
    if (filePtr == NULL) {
        printf("Error: Could not open file '%s' for saving characters.\n", filename);
        return;
    }

    // First, write the total number of characters. This is crucial for loading later!
    fprintf(filePtr, "%d\n", count);

    // Then, loop through each character and write its data in a structured way.
    for (int i = 0; i < count; i++) {
        Character *c = characters[i]; // Get the current character pointer from the array.
        if (c != NULL) { // Basic safety check: ensure the pointer itself is not NULL.
            // Write each character's data, one line per stat, to match our fscanf format.
            fprintf(filePtr, "Name: %s\n", c->name);
            fprintf(filePtr, "Health: %d\n", c->health);
            fprintf(filePtr, "Attack: %d\n", c->attackPower);
            fprintf(filePtr, "Defense: %d\n", c->defense);
            fprintf(filePtr, "Level: %d\n", c->level);
            fprintf(filePtr, "Status: %s\n", c->isAlive ? "Alive" : "Defeated");
        }
    }
    fclose(filePtr); // Close the file to ensure data is written and resources released.
    printf("\nAll %d characters saved to '%s'.\n", count, filename);
}

// --- NEW: Function to load all characters from a file ---
// 'filename': The name of the file to load from.
// 'count': A pointer to an integer. The function will store the total number of loaded characters here,
//          so the calling function (main) knows how many were loaded.
// Returns: A pointer to an array of Character pointers (Character**), or NULL on failure.
Character **loadAllCharacters(const char *filename, int *count) {
    FILE *filePtr = fopen(filename, "r"); // Open in read mode.
    if (filePtr == NULL) {
        // File not found is expected on first run of the program, not necessarily an error for this function.
        *count = 0; // Set count to 0 if file not found, indicating no characters loaded.
        return NULL; // Return NULL, as no characters array could be loaded.
    }

    int loadedCount = 0;
    // First, read the total number of characters from the first line of the file.
    // fscanf returns the number of items successfully read. We expect 1 (the count).
    if (fscanf(filePtr, "%d\n", &loadedCount) != 1) { // Reads the integer count and consumes the trailing newline.
        printf("Error: Could not read character count from '%s'. File might be corrupted or empty.\n", filename);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    if (loadedCount <= 0) { // Handle cases where file is empty or has an invalid count (e.g., negative).
        printf("No characters to load from '%s' or invalid count (%d).\n", filename, loadedCount);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    // Allocate memory for the array of Character pointers based on the loaded count.
    Character **characters = (Character **) malloc(loadedCount * sizeof(Character *));
    if (characters == NULL) { // Check if allocation for the array of pointers failed.
        printf("Error: Memory allocation failed for loading character array (for %d characters).\n", loadedCount);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    // Loop to read and allocate each individual character.
    for (int i = 0; i < loadedCount; i++) {
        characters[i] = (Character *) malloc(sizeof(Character)); // Allocate memory for the actual Character struct.
        if (characters[i] == NULL) { // Check if individual character allocation failed.
            printf("Error: Memory allocation failed for loading character %d.\n", i);
            // Clean up any characters already successfully loaded and their array before exiting.
            for (int j = 0; j < i; j++) {
                free(characters[j]);
                characters[j] = NULL;
            }
            free(characters);
            characters = NULL;
            fclose(filePtr);
            *count = 0;
            return NULL;
        }

        Character *c = characters[i]; // Shorthand for the current character pointer we are working with.
        char buffer[256]; // Temporary buffer to read string labels (like "Name:", "Health:").
        char statusStr[10]; // Buffer specifically for "Alive" or "Defeated" string.

        // Read each stat. The format strings MUST exactly match how they were written in saveAllCharacters.
        fscanf(filePtr, "%s", buffer); // Reads "Name:"
        fscanf(filePtr, " %49[^\n]", c->name); // Reads the name, including spaces, up to 49 chars until newline.

        fscanf(filePtr, "%s", buffer); // Reads "Health:"
        fscanf(filePtr, "%d", &c->health); // Reads integer into health (needs '&' as it's an int variable).

        fscanf(filePtr, "%s", buffer); // Reads "Attack:"
        fscanf(filePtr, "%d", &c->attackPower);

        fscanf(filePtr, "%s", buffer); // Reads "Defense:"
        fscanf(filePtr, "%d", &c->defense);

        fscanf(filePtr, "%s", buffer); // Reads "Level:"
        fscanf(filePtr, "%d", &c->level);

        fscanf(filePtr, "%s", buffer); // Reads "Status:"
        fscanf(filePtr, "%s", statusStr); // Reads "Alive" or "Defeated" string.
        // Convert the string status ("Alive" or "Defeated") into the boolean 'isAlive' flag.
        c->isAlive = (strcmp(statusStr, "Alive") == 0); // strcmp returns 0 if strings are identical.
    }

    fclose(filePtr); // Close the file after reading all data.
    *count = loadedCount; // Update the count in the calling function (main) to reflect actual loaded characters.
    return characters; // Return the dynamically allocated array of characters.
}