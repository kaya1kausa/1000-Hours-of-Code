#include <stdio.h>
#include <string.h> // For string comparison (strcmp)

int main() {
    char input[100]; // Array to store user input (up to 99 characters + null terminator)

    printf("Enter text (type 'quit' to exit):\n");

    do {
        scanf("%99s", input); // Read input inside the loop

        // Only echo if the input is NOT "quit"
        if (strcmp(input, "quit") != 0) {
            printf("You entered: %s\n", input);
            printf("Enter more text (type 'quit' to exit):\n"); // Adjusted prompt for clarity
        }

    } while (strcmp(input, "quit") != 0); // <<<--- Semicolon IS REQUIRED HERE!

    printf("Exiting program.\n");
    return 0;
}