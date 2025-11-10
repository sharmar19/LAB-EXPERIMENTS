#include <stdio.h>

/**
 * @brief Recursively finds the n-th Fibonacci number.
 *
 * @param num The index (n) in the sequence (starting from 0).
 * @return The n-th Fibonacci number.
 *
 * Note on data type: We use 'long long' (a 64-bit signed integer).
 * This will overflow and give incorrect results starting at F(93).
 */
long long FIBO(int num) {
    // Base Case 1: F(0) = 0
    if (num == 0) {
        return 0;
    }
    // Base Case 2: F(1) = 1
    if (num == 1) {
        return 1;
    }
    
    // Recursive Step: F(n) = F(n-1) + F(n-2)
    return FIBO(num - 1) + FIBO(num - 2);
}

// --- Main Program ---
int main() {
    int num, i;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &num);

    // Validate input
    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit with an error
    }
    
    // --- Inefficiency Warning ---
    // This method is O(2^n), which is extremely slow.
    // 40 is a reasonable limit before it becomes unusable.
    if (num > 40) {
        printf("\nWarning: Generating more than 40 terms using this\n");
        printf("recursive method will be EXTREMELY SLOW.\n");
        printf("Proceeding...\n");
    }
    
    // --- Data Type Warning ---
    if (num > 92) {
        printf("\nWarning: Requesting over 92 terms.\n");
        printf("The result will overflow a 'long long' and be incorrect.\n");
    }


    printf("\nFibonacci sequence up to %d terms:\n", num);

    // Loop from 0 up to num-1 to get 'num' terms
    for (i = 0; i < num; i++) {
        // %lld is the format specifier for 'long long'
        printf("%lld ", FIBO(i));
    }

    printf("\n");
    return 0;
}