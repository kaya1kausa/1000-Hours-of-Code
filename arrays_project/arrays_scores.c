#include <stdio.h> // Standard input-output library

int main() {
    // 1. Declare an integer array named 'scores' that can hold 5 elements.
    // 2. Initialize it with these sample scores: 85, 92, 78, 65, 95
    int scores[5] = {85, 92, 78, 65, 95}; // <<< CORRECTED LINE

    // Declare a variable to store the sum of scores
    int sum = 0;

    // 3. Print each score to the console.
    printf("Student Scores:\n"); // Note: Capital 'S' in "Scores"
    printf("Score 1: %d\n", scores[0]); // Accessing the first element (index 0)
    printf("Score 2: %d\n", scores[1]); // Accessing the second element (index 1)
    printf("Score 3: %d\n", scores[2]);
    printf("Score 4: %d\n", scores[3]);
    printf("Score 5: %d\n", scores[4]);

    // 4. Calculate the sum of scores (using direct indexing as initially provided)
    sum = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];

    // Calculate the average score (use float for accurate division)
    float average = (float)sum / 5; // (float) is a type cast to ensure float division

    // Print the average score
    printf("\nAverage Score: %.2f\n", average); // Note: Capital 'S' in "Score" and a newline for spacing

    return 0; // Indicate successful execution
}