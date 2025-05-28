#include <stdio.h> // We need this for printf

int main() {
    char greeting[] = "Hello, Watson!"; // Declares an array just big enough for "Hello, Watson!" + \0
    printf("My greeting is: %s\n", greeting); // %s is the format specifier for strings
    return 0;
}