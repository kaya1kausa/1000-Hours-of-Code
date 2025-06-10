#include <stdio.h>   // For printf and snprintf
#include <string.h>  // For strlen (to check length)

int main() {
    char characterName[50] = "Zenith";
    int characterHealth = 75;
    int characterMana = 30;

    // Define a buffer to hold our status message.
    // Make it large enough to comfortably hold the final string.
    char statusMessage[10]; // This is our "glass" with a size of 100 characters

    // Use snprintf to build the status message safely into 'statusMessage'
    // snprintf(destination_buffer, size_of_buffer, format_string, arguments...)
    snprintf(statusMessage, sizeof(statusMessage),
             "Status: %s - Health: %d, Mana: %d",
             characterName, characterHealth, characterMana);

    // Now, print the safely built status message
    printf("%s\n", statusMessage);

    // Let's also check its length
    printf("Message length: %zu characters\n", strlen(statusMessage));

    return 0;
}