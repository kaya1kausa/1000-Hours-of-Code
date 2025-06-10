#include <stdio.h>   // For printf, scanf
#include <string.h>  // For strcmp

int main() {
    char playerChoice[20]; // Buffer to store player's input

    printf("A mysterious voice echoes: 'What is your purpose, Time Weaver?'\n");
    printf("Options:\n");
    printf("1. 'To restore the flow.'\n");
    printf("2. 'To shatter the hourglass.'\n");
    printf("Enter your choice (type exactly 'restore' or 'shatter'): ");

    // Read player's input.
    // For scanf with strings, you usually just provide the array name (it's already a pointer).
    // But BE CAREFUL: scanf %s does NOT check buffer size, it's like strcpy for input!
    // For safer string input, we'd use fgets or similar, but for this quick demo, we'll stick to scanf %s for simplicity,
    // assuming short input.
    scanf("%s", playerChoice);

    printf("\nYou chose: '%s'\n", playerChoice);

    // Compare player's choice to possible answers
    if (strcmp(playerChoice, "restore") == 0) {
        printf("The voice deepens: 'A noble path, Time Weaver. Begin your journey!'\n");
    } else if (strcmp(playerChoice, "shatter") == 0) {
        printf("The voice crackles: 'A perilous ambition. The multiverse trembles!'\n");
    } else {
        printf("The voice sighs: 'Such indecision. Choose wisely next time, Time Weaver.'\n");
    }

    return 0;
}