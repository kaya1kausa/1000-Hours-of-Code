#include <stdio.h>
#include <string.h> // Required for strcmp

// --- NEW FUNCTION: Calculates and returns a score ---
int calculateChronosScore(int artifacts) {
    int baseScore = 100;
    int artifactBonus = artifacts * 50;
    return baseScore + artifactBonus; // Return the calculated score
}

// --- Function Definition: Handles the entire Chronos Chamber puzzle flow ---
void chronosChamberPuzzle(char doorPassword[], char riddleQuestion[]) {
    // --- Phase 1: The Chamber Door (using a 'do-while' loop) ---
    char passwordAttempt[20]; // <--- ADD THIS LINE BACK!
    // char correctDoorPass[] = "nexus"; // This line is correctly removed, as it's now a parameter

    printf("--- Welcome, Time Weaver, to the Chronos Chamber ---\n");
    printf("A cryptic voice echoes: 'State the key to the present.'\n");

    // ... (rest of your chronosChamberPuzzle code remains the same) ...

    printf("--- Welcome, Time Weaver, to the Chronos Chamber ---\n");
    printf("A cryptic voice echoes: 'State the key to the present.'\n");

    do {
        printf("Enter password: ");
        scanf("%s", passwordAttempt);

        if (strcmp(passwordAttempt, doorPassword) != 0) {
            printf("The runes shimmer, but the door remains sealed. Try again.\n");
        }

    } while (strcmp(passwordAttempt, doorPassword) != 0);

    printf("The door slides open with a whisper. Welcome to the Inner Chamber.\n");

    // --- Phase 2: Scanning the Inner Chamber (using a 'for' loop) ---
    int artifactsFound = 0;
    int totalScanIterations = 3;

    printf("\n--- Initiating Chronos Data Scan ---\n");
    printf("Scanning the chamber for ancient data fragments...\n");

    for (int i = 0; i < totalScanIterations; i++) {
        printf("Scan iteration %d complete. Analyzing...\n", i + 1);
        if ((i + 1) % 2 == 1) {
            artifactsFound++;
            printf("  > Data fragment detected! Total fragments: %d\n", artifactsFound);
        } else {
            printf("  > No new fragments in this sector.\n");
        }
    }

    printf("--- Chamber Scan Complete ---\n");
    printf("Total Chronos Data Fragments found: %d\n", artifactsFound);

    // --- NEW: Calling the score function and using its return value ---
    int finalChamberScore = calculateChronosScore(artifactsFound);
    printf("Based on your performance, your Chronos Chamber score: %d\n", finalChamberScore);

    // ... (Phase 3: Riddle - UNCHANGED) ...
    char riddleAnswer[50];
    char correctRiddleAnswer[] = "future";

    printf("\n--- A Holographic Projection Appears ---\n");
    printf("A serene voice asks: '%s'\n", riddleQuestion);

    while (strcmp(riddleAnswer, correctRiddleAnswer) != 0) {
        printf("Your answer: ");
        scanf("%s", riddleAnswer);

        if (strcmp(riddleAnswer, correctRiddleAnswer) != 0) {
            printf("The projection shimmers with disapproval. Think deeper, Time Weaver.\n");
        }
    }

    printf("The projection nods slowly. 'Indeed. You comprehend the essence of time.'\n");
    printf("--- Chronos Chamber Challenge Complete! ---\n");

} // End of chronosChamberPuzzle function definition

// --- Main function: The program's entry point ---
int main() {
    char mainDoorPass[] = "nexus";
    char mainRiddleQ[] = "I am always coming, but never arrive. What am I?";

    chronosChamberPuzzle(mainDoorPass, mainRiddleQ);

    return 0;
}