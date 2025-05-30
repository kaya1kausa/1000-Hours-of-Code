#include <stdio.h> // Essential for printf

// Function Declaration (Prototype): Tells the compiler about our function
void printGameGreeting(); // 'void' means it returns nothing, () means it takes no arguments

int main() {
    printf("Game starting...\n");
    printGameGreeting(); // Function Call: Execute the code inside printGameGreeting
    printf("Main game loop preparing...\n");
    return 0;
}

// Function Definition: The actual code block
void printGameGreeting() {
    printf("Welcome, Traveler, to the 1KAUSA Multiverse!\n");
    printf("Mindfulness creates coherent energy.\n");
}