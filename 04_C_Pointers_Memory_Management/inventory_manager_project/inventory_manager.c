#include <stdio.h>

// Assuming ITEM_ID_EMPTY is a defined constant like 0 for an empty slot
#define ITEM_ID_EMPTY 0
#define INVENTORY_SIZE 10

// Function to clear 'count' inventory slots starting from 'start_index'
// This function takes a pointer to the inventory array and its size.
void clearInventorySlots(int *inventory, int size, int start_index, int count) {
    printf("Clearing %d slots starting from index %d...\n", count, start_index);
    // You could use inventory[i] here too, but let's show pointer arithmetic
    for (int i = 0; i < count; i++) {
        if ((start_index + i) < size) { // Ensure we don't go out of bounds
            *(inventory + start_index + i) = ITEM_ID_EMPTY; // Clear the slot using pointer arithmetic
            // This is equivalent to: inventory[start_index + i] = ITEM_ID_EMPTY;
        } else {
            printf("Warning: Attempted to clear slot beyond inventory size.\n");
            break;
        }
    }
}

int main() {
    // Initialize player inventory with some items
    int playerInventory[INVENTORY_SIZE] = {101, 102, 0, 103, 104, 0, 0, 105, 106, 0};

    printf("Initial Player Inventory:\n");
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        printf("Slot %d: %d\n", i, playerInventory[i]);
    }
    printf("\n");

    // Example 1: Clear 3 slots starting from index 2
    clearInventorySlots(playerInventory, INVENTORY_SIZE, 2, 3);

    printf("\nInventory after clearing 3 slots from index 2:\n");
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        printf("Slot %d: %d\n", i, playerInventory[i]);
    }
    printf("\n");

    // Example 2: Try to clear 5 slots starting from index 7 (will hit boundary)
    clearInventorySlots(playerInventory, INVENTORY_SIZE, 7, 5);

    printf("\nInventory after trying to clear 5 slots from index 7:\n");
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        printf("Slot %d: %d\n", i, playerInventory[i]);
    }
    printf("\n");

    return 0;
}