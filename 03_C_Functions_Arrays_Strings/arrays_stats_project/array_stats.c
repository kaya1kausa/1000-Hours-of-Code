#include <stdio.h> // For input/output functions

#define MAX_NUMBERS 5 // A preprocessor directive to define a constant for array size

int main() {
    int numbers[MAX_NUMBERS]; // Declare an integer array to hold 5 numbers
    int i;                    // Loop counter
    int sum = 0;              // Variable to store the sum of numbers
    float average;            // Variable to store the average

    printf("--- Array Statistics Calculator ---\n");
    printf("Please enter %d integers:\n", MAX_NUMBERS);

    // Loop to get input from the user and store in the array
    for (i = 0; i < MAX_NUMBERS; i++) {
        printf("Enter number %d: ", i + 1); // Prompt for 1-based counting
        scanf("%d", &numbers[i]);           // Store input at current index `i`
    }

    printf("\nYou entered the following numbers:\n");
    // Loop to display the numbers and calculate their sum
    for (i = 0; i < MAX_NUMBERS; i++) {
        printf("%d ", numbers[i]); // Print each number
        sum += numbers[i];         // Add each number to sum
    }
    printf("\n"); // Newline after printing all numbers

    // Calculate the average
    // (float)sum performs type casting to ensure float division
    average = (float)sum / MAX_NUMBERS;

    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2f\n", average);

    return 0;
}