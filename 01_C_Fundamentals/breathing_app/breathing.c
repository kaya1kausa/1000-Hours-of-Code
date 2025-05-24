#include <stdio.h> // Standard input/output library for printf

int main() {
    // Inhale cycle
    printf("Beginning breathing exercise...\n");

    for (int i = 1; i <= 4; i++) { // <<<--- NO SEMICOLON HERE!
        printf("Inhale: %d\n", i);
    }

    printf("Hold...\n"); // This is just a single print, outside a loop

    // Exhale cycle
    for (int i = 1; i <= 6; i++) { // <<<--- NO SEMICOLON HERE!
        printf("Exhale: %d\n", i); // <<<--- "Exhale" message
    }

    printf("Cycle complete!\n"); // End message
    return 0; // Indicate successful execution
}