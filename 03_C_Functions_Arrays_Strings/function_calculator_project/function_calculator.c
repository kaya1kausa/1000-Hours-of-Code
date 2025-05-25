#include <stdio.h> // For input/output functions like printf, scanf

// Function Declarations (Prototypes) - Tell the compiler about our functions
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
void display_menu(); // A function that doesn't return anything

int main() {
    float num1, num2, result;
    char operator;

    // Display the menu
    display_menu();

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Call the appropriate function based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2); // Function Call
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2); // Function Call
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2); // Function Call
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2); // Function Call
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

// Function Definitions - The actual implementation of the functions

void display_menu() {
    printf("--- Simple Calculator ---\n");
    printf("Operations: +, -, *, /\n");
    printf("-------------------------\n");
}

float add(float num1, float num2) { // Function Definition
    return num1 + num2;
}

float subtract(float num1, float num2) { // Function Definition
    return num1 - num2;
}

float multiply(float num1, float num2) { // Function Definition
    return num1 * num2;
}

float divide(float num1, float num2) { // Function Definition
    return num1 / num2;
}