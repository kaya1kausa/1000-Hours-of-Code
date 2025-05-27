#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; // An integer array
    int i;

    printf("--- Pointers and Arrays --- \n\n");

    // 1. Array Name as a Pointer
    printf("Address of the first element (numbers[0]): %p\n", &numbers[0]);
    printf("Value of the array name (numbers): %p\n", numbers); // Array name evaluates to address of first element
    printf("Value of the first element using array name as pointer: %d\n\n", *numbers); // Dereferencing 'numbers' gives numbers[0]

    // 2. Accessing elements using array indexing (familiar way)
    printf("Accessing elements using array indexing:\n");
    for (i = 0; i < 5; i++) {
        printf("numbers[%d]: %d (Address: %p)\n", i, numbers[i], &numbers[i]);
    }
    printf("\n");

    // 3. Accessing elements using pointer arithmetic
    printf("Accessing elements using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        // (numbers + i) gives the address of the i-th element
        // *(numbers + i) dereferences that address to get the value
        printf("*(numbers + %d): %d (Address: %p)\n", i, *(numbers + i), (numbers + i));
    }
    printf("\n");

    // 4. Using a pointer variable to iterate through the array
    printf("Using a pointer variable to iterate:\n");
    int *ptr = numbers; // ptr points to the first element of numbers

    for (i = 0; i < 5; i++) {
        printf("*ptr: %d (Address: %p)\n", *ptr, ptr);
        ptr++; // Increment the pointer to point to the next element
    }
    printf("\n");

    return 0;
}