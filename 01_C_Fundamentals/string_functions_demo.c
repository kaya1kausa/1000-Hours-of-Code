#include <stdio.h>   // For printf and snprintf
#include <string.h>  // For strlen (and concepts of strcpy/strcat)

int main() {
    char firstName[20] = "Kaya";
    char lastName[20] = "Time Weaver";
    char titlePrefix[] = "The "; // A small string literal for "The "

    // We need a buffer big enough to hold the combined string.
    // Let's calculate:
    // "Kaya" (4) + " " (1) + "Time Weaver" (11) = 16 characters for fullName
    // "The " (4) + fullName (16) = 20 characters for final title.
    // Always add +1 for the null terminator '\0'. So, 21 characters.
    char finalDescription[100]; // Make it large enough, e.g., 100 for safety

    // --- Building the string safely with snprintf() ---

    // 1. Start building the final description with the prefix
    // snprintf(destination_buffer, size_of_buffer, format_string, arguments...)
    // This writes "The " into finalDescription.
    snprintf(finalDescription, sizeof(finalDescription), "%s", titlePrefix);

    // 2. Append the first name
    // Use %s to append the string, appending to what's already there.
    // This adds "Kaya" after "The ".
    // Note: When appending, snprintf appends to the *current* end of the string.
    // The trick is to use strlen() to find the current end, and subtract that from the total size.
    // (This is why snprintf for *appending* multiple parts can get complex;
    // a simpler approach for combining known parts is to build the whole thing at once).

    // Let's build the whole character description in one go with snprintf for clarity.
    // This is often the safest and easiest way to combine multiple strings.
    snprintf(finalDescription, sizeof(finalDescription), "%s%s %s",
             titlePrefix, firstName, lastName);

    // 3. Get the length of the final description
    size_t descriptionLength = strlen(finalDescription);

    printf("Character Description: \"%s\"\n", finalDescription);
    printf("Description Length: %zu characters\n", descriptionLength);

    if (descriptionLength > 25) {
        printf("Wow, that's a detailed description for a hero!\n");
    } else {
        printf("A concise description, but still powerful!\n");
    }

    return 0;
}

