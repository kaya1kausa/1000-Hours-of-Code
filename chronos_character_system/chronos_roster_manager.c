// chronos_roster_manager.c - A standalone program for managing a dynamic roster of Chronos Characters.
// This project consolidates dynamic memory allocation (malloc, free, realloc) and File I/O.

#include <stdio.h>   // For standard I/O (printf, fopen, fclose, fprintf, fscanf, fgets)
#include <stdlib.h>  // For dynamic memory allocation (malloc, free, realloc)
#include <string.h>  // For string manipulation (strcpy, strncpy, strcmp, strlen, strcspn)
#include <stdbool.h> // For boolean type (bool, true, false)

// --- Character Struct Definition (copied here for self-containment) ---
// In a larger project, this would typically come from a character.h file.
typedef struct {
    char name[50];
    int health;
    int attackPower;
    int defense;
    int level;
    bool isAlive;
} Character;


// --- Function Implementations (ALL DEFINITIONS ARE HERE, BEFORE main()) ---

// Function to initialize a new character.
void initializeCharacter(Character *characterPtr, const char *name, int health, int attack, int defense, int level) {
    if (characterPtr == NULL) {
        printf("Error: Cannot initialize a NULL character pointer.\n");
        return;
    }
    strncpy(characterPtr->name, name, sizeof(characterPtr->name) - 1);
    characterPtr->name[sizeof(characterPtr->name) - 1] = '\0';
    characterPtr->health = health;
    characterPtr->attackPower = attack;
    characterPtr->defense = defense;
    characterPtr->level = level;
    characterPtr->isAlive = true;
    printf("%s has been created!\n", characterPtr->name);
}

// Function to print a single character's stats.
void printCharacterStats(Character *characterPtr) {
    if (characterPtr == NULL) {
        printf("Error: Cannot print stats for a NULL character pointer.\n");
        return;
    }
    printf("\n--- %s's Stats ---\n", characterPtr->name);
    printf("Level: %d\n", characterPtr->level);
    printf("Health: %d\n", characterPtr->health);
    printf("Attack: %d\n", characterPtr->attackPower);
    printf("Defense: %d\n", characterPtr->defense);
    printf("Status: %s\n", characterPtr->isAlive ? "Alive" : "Defeated");
    printf("-----------------------\n");
}

// Function to add a new character to a dynamic array of characters.
Character **addCharacterToRoster(Character **roster, int *count, Character *newChar) {
    (*count)++;
    Character **tempRoster = (Character **) realloc(roster, (*count) * sizeof(Character *));

    if (tempRoster == NULL) {
        printf("Error: Failed to reallocate memory for roster! Character not added.\n");
        (*count)--;
        return roster;
    }
    tempRoster[(*count) - 1] = newChar;

    printf("%s added to the roster! Roster size: %d\n", newChar->name, *count);
    return tempRoster;
}

// Function to save the entire roster of characters to a file.
void saveRoster(Character **roster, int count, const char *filename) {
    FILE *filePtr = fopen(filename, "w");
    if (filePtr == NULL) {
        printf("Error: Could not open file '%s' for saving roster.\n", filename);
        return;
    }

    fprintf(filePtr, "%d\n", count);

    for (int i = 0; i < count; i++) {
        Character *c = roster[i];
        if (c != NULL) {
            fprintf(filePtr, "Name: %s\n", c->name);
            fprintf(filePtr, "Health: %d\n", c->health);
            fprintf(filePtr, "Attack: %d\n", c->attackPower);
            fprintf(filePtr, "Defense: %d\n", c->defense);
            fprintf(filePtr, "Level: %d\n", c->level);
            fprintf(filePtr, "Status: %s\n", c->isAlive ? "Alive" : "Defeated");
        }
    }
    fclose(filePtr);
    printf("\nAll %d characters saved to '%s'.\n", count, filename);
}

// Function to load the entire roster of characters from a file.
Character **loadRoster(const char *filename, int *count) {
    FILE *filePtr = fopen(filename, "r");
    if (filePtr == NULL) {
        *count = 0;
        return NULL;
    }

    int loadedCount = 0;
    if (fscanf(filePtr, "%d\n", &loadedCount) != 1) {
        printf("Error: Could not read character count from '%s'. File might be corrupted or empty.\n", filename);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    if (loadedCount <= 0) {
        printf("No characters to load from '%s' or invalid count (%d).\n", filename, loadedCount);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    Character **characters = (Character **) malloc(loadedCount * sizeof(Character *));
    if (characters == NULL) {
        printf("Error: Memory allocation failed for loading character array.\n", loadedCount);
        fclose(filePtr);
        *count = 0;
        return NULL;
    }

    for (int i = 0; i < loadedCount; i++) {
        characters[i] = (Character *) malloc(sizeof(Character));
        if (characters[i] == NULL) {
            printf("Error: Memory allocation failed for loading character %d.\n", i);
            for (int j = 0; j < i; j++) { free(characters[j]); characters[j] = NULL; }
            free(characters); characters = NULL;
            fclose(filePtr);
            *count = 0;
            return NULL;
        }

        Character *c = characters[i];
        char buffer[256];
        char statusStr[10];

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, " %49[^\n]\n", c->name); // CRITICAL: consumes newline

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, "%d\n", &c->health); // CRITICAL: consumes newline

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, "%d\n", &c->attackPower); // CRITICAL: consumes newline

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, "%d\n", &c->defense); // CRITICAL: consumes newline

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, "%d\n", &c->level); // CRITICAL: consumes newline

        fscanf(filePtr, "%s", buffer);
        fscanf(filePtr, "%s\n", statusStr); // CRITICAL: consumes newline
        c->isAlive = (strcmp(statusStr, "Alive") == 0);
    }

    fclose(filePtr);
    *count = loadedCount;
    return characters;
}

// Function to free all memory associated with the roster.
void freeRoster(Character **roster, int count) {
    if (roster == NULL) {
        return;
    }

    for (int i = 0; i < count; i++) {
        if (roster[i] != NULL) {
            free(roster[i]);
            roster[i] = NULL;
        }
    }
    free(roster);
    roster = NULL;
}


// --- Main function: The program's entry point ---
int main() {
    printf("--- Chronos Roster Manager ---\n");

    Character **roster = NULL;
    int characterCount = 0;
    char choice;

    // Try to load an existing roster on startup
    roster = loadRoster("roster.txt", &characterCount); // loadRoster definition is above main() now
    if (roster != NULL && characterCount > 0) {
        printf("\nRoster loaded successfully! Total characters: %d\n", characterCount);
    } else {
        printf("\nNo existing roster found or failed to load. Starting with an empty roster.\n");
        characterCount = 0;
    }

    do {
        printf("\n--- Menu ---\n");
        printf("1. Add New Character\n");
        printf("2. Display Roster\n");
        printf("3. Save Roster\n");
        printf("4. Load Roster (overwrites current roster)\n");
        printf("Q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); // The space before %c consumes any leftover newline from previous input

        // --- Process user choice ---
        if (choice == '1') {
            printf("\n--- Add New Character ---\n");
            Character *newCharacter = (Character *) malloc(sizeof(Character));
            if (newCharacter == NULL) {
                printf("Error: Memory allocation failed for new character!\n");
                continue;
            }

            char nameInput[50];
            int healthInput, attackInput, defenseInput, levelInput;
            int c; // Declare c for getchar()

            // CRITICAL FIX: Clear the input buffer before reading the name.
            while ((c = getchar()) != '\n' && c != EOF); // Consume leftover newline from menu scanf

            printf("Enter character Name: ");
            fgets(nameInput, sizeof(nameInput), stdin);
            nameInput[strcspn(nameInput, "\n")] = 0;

            printf("Enter Health: ");
            scanf("%d", &healthInput);
            while ((c = getchar()) != '\n' && c != EOF); // Consume newline after int scanf

            printf("Enter Attack Power: ");
            scanf("%d", &attackInput);
            while ((c = getchar()) != '\n' && c != EOF); // Consume newline

            printf("Enter Defense: ");
            scanf("%d", &defenseInput);
            while ((c = getchar()) != '\n' && c != EOF); // Consume newline

            printf("Enter Level: ");
            scanf("%d", &levelInput);
            while ((c = getchar()) != '\n' && c != EOF); // Consume newline


            initializeCharacter(newCharacter, nameInput, healthInput, attackInput, defenseInput, levelInput);

            roster = addCharacterToRoster(roster, &characterCount, newCharacter);
            if (roster == NULL && characterCount > 0) {
                 printf("Critical Error: Roster became NULL after adding character.\n");
            }

        } else if (choice == '2') {
            printf("\n--- Current Roster ---\n");
            if (characterCount == 0) {
                printf("Roster is empty.\n");
            } else {
                for (int i = 0; i < characterCount; i++) {
                    printCharacterStats(roster[i]);
                }
            }
        } else if (choice == '3') {
            printf("\n--- Saving Roster ---\n");
            saveRoster(roster, characterCount, "roster.txt");
        } else if (choice == '4') {
            printf("\n--- Loading Roster ---\n");
            // Free current roster before loading a new one to prevent memory leaks.
            if (roster != NULL) {
                freeRoster(roster, characterCount);
                roster = NULL;
                characterCount = 0;
            }
            roster = loadRoster("roster.txt", &characterCount);
            if (roster != NULL && characterCount > 0) {
                printf("Roster loaded successfully! Total characters: %d\n", characterCount);
                // Display loaded roster immediately for verification.
                for (int i = 0; i < characterCount; i++) {
                    printCharacterStats(roster[i]);
                }
            } else {
                printf("Failed to load roster or roster is empty. Current roster remains empty.\n");
            }
        } else if (choice == 'Q' || choice == 'q') {
            printf("Quitting...\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        // Important: This general getchar loop at the end of the do-while is still good,
        // but the targeted ones after scanf are more critical for specific issues.
        // int c; // Already declared above.
        // while ((c = getchar()) != '\n' && c != EOF); // Redundant if specific ones are used.
        // Removed to avoid re-declaration and potential double-consumption.

    } while (choice != 'Q' && choice != 'q');

    printf("\nFinalizing: Saving current roster and freeing memory.\n");
    saveRoster(roster, characterCount, "roster.txt"); // Save one last time on quit.

    freeRoster(roster, characterCount); // Free all dynamically allocated memory.

    printf("Exiting Chronos Roster Manager. Goodbye!\n");
    return 0;
}