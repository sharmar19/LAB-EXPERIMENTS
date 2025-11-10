#include <stdio.h>

int main() {
    // --- 1. Integer Pointer ---
    int int_var = 10;
    int *int_ptr;       // Declare an integer pointer
    int_ptr = &int_var; // Initialize it with the address of int_var

    printf("--- Integer Pointer (int*) ---\n");
    printf("Value of int_var:         %d\n", int_var);
    printf("Address of int_var:       %p\n", (void*)&int_var);
    printf("Value stored in int_ptr:  %p\n", (void*)int_ptr); // Pointer's value is an address
    printf("Value int_ptr points to:  %d\n", *int_ptr);      // Dereference the pointer
    
    printf("\n");

    // --- 2. Float Pointer ---
    float float_var = 3.14f;
    float *float_ptr;       // Declare a float pointer
    float_ptr = &float_var; // Initialize it with the address of float_var

    printf("--- Float Pointer (float*) ---\n");
    printf("Value of float_var:         %.2f\n", float_var);
    printf("Address of float_var:       %p\n", (void*)&float_var);
    printf("Value stored in float_ptr:  %p\n", (void*)float_ptr);
    printf("Value float_ptr points to:  %.2f\n", *float_ptr);

    printf("\n");

    // --- 3. Char Pointer ---
    char char_var = 'A';
    char *char_ptr;       // Declare a char pointer
    char_ptr = &char_var; // Initialize it with the address of char_var

    printf("--- Char Pointer (char*) ---\n");
    printf("Value of char_var:         %c\n", char_var);
    printf("Address of char_var:       %p\n", (void*)&char_var);
    printf("Value stored in char_ptr:  %p\n", (void*)char_ptr);
    printf("Value char_ptr points to:  %c\n", *char_ptr);
    
    printf("\n");

    /*
    Note on %p and (void*):
    - %p is the standard printf format specifier for printing pointer addresses.
    - It's good practice to cast the pointer to (void*) when printing with %p,
      as it ensures compatibility regardless of the original pointer type.
    */

    return 0;
}