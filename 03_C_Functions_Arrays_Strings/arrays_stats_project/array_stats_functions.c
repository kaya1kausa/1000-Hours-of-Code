#include <stdio.h>

#define MAX_NUMBERS 5

// Function Declarations (Prototypes)
int calculateSum(int arr[], int size);
float calculateAverage(int arr[], int size);

int main() {
    int numbers[MAX_NUMBERS];
    int i;
    int sum;
    float average;

    printf("--- Array Statistics Calculator (with Functions) ---\n");
    printf("Please enter %d integers:\n", MAX_NUMBERS);

    // Loop to get input from the user and store in the array
    for (i = 0; i < MAX_NUMBERS; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered the following numbers:\n");
    // Loop to display the numbers
    for (i = 0; i < MAX_NUMBERS; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Call functions to calculate sum and average
    sum = calculateSum(numbers, MAX_NUMBERS);       // Pass array and its size
    average = calculateAverage(numbers, MAX_NUMBERS); // Pass array and its size

    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2f\n", average);

    return 0;
}

// Function Definitions

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int total = 0;
    int i;
    for (i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Function to calculate the average of array elements
float calculateAverage(int arr[], int size) {
    int total = 0;
    int i;
    for (i = 0; i < size; i++) {
        total += arr[i];
    }
    // Ensure float division by type casting
    return (float)total / size;
}