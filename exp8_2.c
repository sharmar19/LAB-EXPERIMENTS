#include <stdio.h>

int main() {
    // --- 1. Setup Arrays and Pointers ---
    
    // An array of integers
    int int_arr[] = {10, 20, 30, 40};
    int *int_ptr = &int_arr[0]; // Point to the first element (10)

    // An array of characters
    char char_arr[] = {'A', 'B', 'C', 'D'};
    char *char_ptr = &char_arr[0]; // Point to the first element ('A')

    // An array of doubles (often 8 bytes)
    double double_arr[] = {1.1, 2.2, 3.3, 4.4};
    double *double_ptr = &double_arr[0]; // Point to the first element (1.1)

    // --- 2. Integer Pointer (int*) ---
    printf("--- Integer Pointer (int*) ---\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Initial Address (int_ptr):   %p\n", (void*)int_ptr);
    printf("Initial Value (*int_ptr):    %d\n", *int_ptr);
    
    // Increment the pointer
    int_ptr++;
    
    printf("After Increment (int_ptr++):\n");
    printf("New Address (int_ptr):       %p\n", (void*)int_ptr);
    printf("New Value (*int_ptr):        %d\n", *int_ptr); // Accesses int_arr[1]
    
    // Decrement the pointer
    int_ptr--;
    
    printf("After Decrement (int_ptr--):\n");
    printf("Final Address (int_ptr):     %p\n", (void*)int_ptr);
    printf("Final Value (*int_ptr):      %d\n", *int_ptr); // Accesses int_arr[0]
    
    printf("\n------------------------------------\n");

    // --- 3. Character Pointer (char*) ---
    printf("--- Character Pointer (char*) ---\n");
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Initial Address (char_ptr):  %p\n", (void*)char_ptr);
    printf("Initial Value (*char_ptr):   %c\n", *char_ptr);
    
    // Increment the pointer
    char_ptr++;
    
    printf("After Increment (char_ptr++):\n");
    printf("New Address (char_ptr):      %p\n", (void*)char_ptr);
    printf("New Value (*char_ptr):       %c\n", *char_ptr); // Accesses char_arr[1]
    
    printf("\n------------------------------------\n");

    // --- 4. Double Pointer (double*) ---
    printf("--- Double Pointer (double*) ---\n");
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Initial Address (double_ptr): %p\n", (void*)double_ptr);
    printf("Initial Value (*double_ptr):  %.1f\n", *double_ptr);
    
    // Increment the pointer
    double_ptr++;
    
    printf("After Increment (double_ptr++):\n");
    printf("New Address (double_ptr):     %p\n", (void*)double_ptr);
    printf("New Value (*double_ptr):      %.1f\n", *double_ptr); // Accesses double_arr[1]
    
    printf("\n");

    return 0;
}