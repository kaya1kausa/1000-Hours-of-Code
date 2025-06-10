#include <stdio.h>

int main() {
    int age; // Declare an integer variable to store the input

    printf("Enter your age: "); // Prompt the user
    scanf("%d", &age);          // Read an integer and store it in 'age'

    printf("You entered: %d years old.\n", age);
    return 0;
}