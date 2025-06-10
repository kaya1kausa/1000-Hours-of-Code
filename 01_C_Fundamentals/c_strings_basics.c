#include <stdio.h> // For printf

int main() {
    // Method 1: Initialize directly (compiler adds '\0' automatically)
    char greeting[] = "Hello, world!";

    // Method 2: Specify size, then initialize (be careful with size!)
    char name[20] = "Kaya"; // Max 19 characters + '\0'

    // Method 3: Initialize character by character (you MUST add '\0')
    char city[10] = {'S', 'a', 'o', ' ', 'P', 'a', 'u', 'l', 'o', '\0'}; // 9 chars + 1 for '\0'

    printf("Greeting: %s\n", greeting);
    printf("Name: %s\n", name);
    printf("City: %s\n", city);

    return 0;
}