#include <stdio.h> // For printf

// Function to heal a player using a pointer
// It takes a pointer to an integer (int*) as its parameter
// 'void' means it doesn't return a value
void healPlayer(int *playerHealthPointer, int healAmount) {
    printf("--- Inside healPlayer function ---\n");
    printf("Initial health at address %p: %d\n", playerHealthPointer, *playerHealthPointer);

    // Directly modify the health value at the address the pointer holds
    *playerHealthPointer += healAmount; // Add healAmount to the value pointed to by playerHealthPointer

    printf("Healed by %d. New health at address %p: %d\n", healAmount, playerHealthPointer, *playerHealthPointer);
    printf("--- Exiting healPlayer function ---\n");
}

int main() {
    int playerCurrentHealth = 80; // Our player's initial health
    int potionStrength = 20;     // How much the potion heals

    printf("--- Game Start ---\n");
    printf("Player's health before healing: %d\n", playerCurrentHealth);
    printf("Address of playerCurrentHealth: %p\n\n", &playerCurrentHealth);

    // Call the healPlayer function, passing the ADDRESS of playerCurrentHealth
    // We use '&' to get the address
    healPlayer(&playerCurrentHealth, potionStrength);

    printf("\n--- Back in main function ---\n");
    // Observe that playerCurrentHealth in main has been modified!
    printf("Player's health after healing: %d\n", playerCurrentHealth);

    return 0;
}
