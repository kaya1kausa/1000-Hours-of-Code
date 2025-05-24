#include <stdio.h> // Standard input-output library

int main () {

    float num1;
    float num2;
    float result;
    char operator;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }


    return 0;

}