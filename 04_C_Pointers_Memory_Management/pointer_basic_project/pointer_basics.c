#include <stdio.h> // Standard input/output library

int main() {
    int age = 30;       // Declare an integer variable 'age' and initialize it to 30
    int *pAge = &age;   // Declare an integer pointer 'pAge' and store the memory address of 'age' in it

    float temperature = 25.5; // Declare a float variable 'temperature'
    float *pTemp = &temperature; // Declare a float pointer 'pTemp' and store the memory address of 'temperature'

    printf("--- Basic Pointer Exploration ---\n\n");

    // Displaying the value of 'age' and its address
    printf("Value of age: %d\n", age);
    printf("Memory address of age: %p\n", &age); // Using %%p for printing addresses
    printf("Value stored at pAge (which is age's address): %p\n", pAge);
    printf("Value that pAge points to (*pAge): %d\n\n", *pAge); // Dereference pAge to get the value

    // Displaying the value of 'temperature' and its address
    printf("Value of temperature: %.1f\n", temperature);
    printf("Memory address of temperature: %p\n", &temperature);
    printf("Value stored at pTemp (which is temperature's address): %p\n", pTemp);
    printf("Value that pTemp points to (*pTemp): %.1f\n\n", *pTemp);

    // Modifying value using a pointer
    *pAge = 31; // Change the value that pAge points to (which is 'age')
    printf("New value of age after modifying via pointer: %d\n", age);
    printf("Value that pAge points to now (*pAge): %d\n\n", *pAge);

    return 0; // Indicate successful execution
}