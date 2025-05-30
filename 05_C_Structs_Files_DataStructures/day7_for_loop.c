#include <stdio.h>
#include <string.h> // For strlen

int main() {
    char word[] = "KAUSA";
    printf("Characters in '%s':\n", word);
    // Loop from the first character (index 0) up to (but not including) the null terminator
    for (int i = 0; i < strlen(word); i++) {
        printf("  Character at index %d: %c\n", i, word[i]);
    }
    return 0;
}