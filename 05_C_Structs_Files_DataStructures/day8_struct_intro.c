#include <stdio.h>
#include <string.h> // For strncpy

// 1. Define the 'blueprint' for a game character
// This tells C what data a 'Player' should contain
struct Player {
    char name[50];    // A string (char array) for the player's name
    int health;       // An integer for health points
    int score;        // An integer for the score
    // We could add more: float xPos, yPos; bool isAlive; int inventory[10]; etc.
};

int main() {
    // 2. Create actual 'Player' variables (instances of the struct)
    struct Player hero;     // This is our main player character
    struct Player sidekick; // A second player for example

    // 3. Access and set the data for 'hero' using the dot operator (.)
    // Remember to use strncpy for strings!
    strncpy(hero.name, "Kaya", sizeof(hero.name) - 1);
    hero.name[sizeof(hero.name) - 1] = '\0'; // Manual null-termination for safety
    hero.health = 100;
    hero.score = 500;

    // Set data for 'sidekick'
    strncpy(sidekick.name, "Spirit Guide", sizeof(sidekick.name) - 1);
    sidekick.name[sizeof(sidekick.name) - 1] = '\0';
    sidekick.health = 75;
    sidekick.score = 250;

    // 4. Print out the data from our struct variables
    printf("--- Hero Stats ---\n");
    printf("Name: %s\n", hero.name);
    printf("Health: %d\n", hero.health);
    printf("Score: %d\n", hero.score);

    printf("\n--- Sidekick Stats ---\n");
    printf("Name: %s\n", sidekick.name);
    printf("Health: %d\n", sidekick.health);
    printf("Score: %d\n", sidekick.score);

    return 0;
}