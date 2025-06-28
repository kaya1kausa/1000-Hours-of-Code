// character.h - Header file for Chronos Character System

#ifndef CHARACTER_H // Header guard: prevents multiple inclusions of this file
#define CHARACTER_H

#include <stdio.h>   // For FILE pointer, fopen, fclose etc.
#include <string.h>  // For strcpy, strncpy, strcmp
#include <stdbool.h> // For boolean type (bool, true, false)
#include <stdlib.h>  // For malloc, free (needed for loadAllCharacters return type)

// Define the blueprint for our Chronos Game Character
typedef struct {
    char name[50];
    int health;
    int attackPower;
    int defense;
    int level;
    bool isAlive;
} Character;

// --- Function Prototypes (Declarations) ---
// These tell the compiler what functions are available and how to call them.
void initializeCharacter(Character *characterPtr, const char *name, int health, int attack, int defense, int level);
void printCharacterStats(Character *characterPtr);
void attackCharacter(Character *attacker, Character *target);

// NEW: Function prototypes for saving and loading multiple characters
// 'characters' is a pointer to an array of Character pointers (Character**)
// 'count' is the number of characters in that array.
void saveAllCharacters(Character **characters, int count, const char *filename);

// Returns a Character** (pointer to an array of Character pointers)
// The 'int *count' argument is a pointer, so loadAllCharacters can modify the 'count' variable
// in the calling function (main), telling main how many characters were loaded.
Character **loadAllCharacters(const char *filename, int *count);

#endif // CHARACTER_H