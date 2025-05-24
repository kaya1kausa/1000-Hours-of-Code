#include <stdio.h> // This line includes the standard input/output library

int main() {
    // This for loop will run 5 times
    for (int i = 10; i >= 0; i--) {
        printf("Count: %d\n", i); // Prints the current value of i
    }

    printf("Loop finished!\n"); // This line runs after the loop is done
    return 0; // Indicates that the program ran successfully
}