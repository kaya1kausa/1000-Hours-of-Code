#include <stdio.h>   // For printf, scanf
#include <string.h>  // For strcmp (for password check)

int main() {
    // --- Phase 1: The Chamber Door ---
    char passwordAttempt[20]; // Buffer for user's password attempt
    char correctDoorPass[] = "nexus"; // The secret password for the door

    printf("--- Welcome, Time Weaver, to the Chronos Chamber ---\n");
    printf("A cryptic voice echoes: 'State the key to the present.'\n");

    // The 'do-while' loop: execute at least once, then repeat if condition is true
    do {
        printf("Enter password: ");
        // Use scanf to get the attempt. Remember scanf %s does NOT check buffer size!
        // For real applications, we'd use fgets for safer input.
        scanf("%s", passwordAttempt);

        if (strcmp(passwordAttempt, correctDoorPass) != 0) {
            printf("The runes shimmer, but the door remains sealed. Try again.\n");
        }

    } while (strcmp(passwordAttempt, correctDoorPass) != 0); // Loop while password is NOT correct

    printf("The door slides open with a whisper. Welcome to the Inner Chamber.\n");

    // We will add more phases here later!

    return 0;
}