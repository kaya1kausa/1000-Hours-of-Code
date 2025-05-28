#include <stdio.h> // We need this for printf
int main() {
char playerName[50];
    
    printf("What is your name, traveler?\n");
    // Read a string from the user 

    scanf("%s", playerName); // %s is the format specifier for strings
        
   printf("Greetings, %s! Welcome to the 1KAUSA multiverse!\n", playerName);
    printf("%s!\n", playerName);
// Output:
// Greetings, Kaya! Welcome to the 1KAUSA multiverse!
// Kaya!

    return 0;
}