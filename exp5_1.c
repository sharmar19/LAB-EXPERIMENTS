#include <stdio.h>

int main() {
    int arr[100]; // Array to store up to 100 integers
    int n, i;
    int max1, max2;

    // --- 1. Read the list of integers ---

    // Get the total number of elements from the user
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    // Validate the size
    if (n > 100) { // We only need to check upper bound now
        printf("Error: Array size is limited to 100.\n");
        return 1; // Exit the program with an error code
    }

    // --- 2. Find the second largest integer ---

    // Handle the edge case where a second largest is not possible
    if (n < 2) {
        printf("Cannot find a second largest element: need at least 2 numbers.\n");
        return 0; // Exit successfully
    }

    // Read the *first two* integers to initialize max1 and max2
    printf("Enter %d integers, separated by spaces:\n", n);
    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);

    // Initialize max1 and max2 by comparing the first two elements
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Read the *rest* of the integers (from the 3rd element onwards)
    // and perform the comparison in the same loop.
    for (i = 2; i < n; i++) {
        scanf("%d", &arr[i]); // Read the next element

        // Now, check the element we just read
        if (arr[i] > max1) {
            // New largest found
            max2 = max1; // Old largest becomes second largest
            max1 = arr[i]; // New element is now largest
        } else if (arr[i] > max2 && arr[i] < max1) {
            // New second largest found
            max2 = arr[i];
        }
    }

    // --- 3. Print the result ---

    // If max1 and max2 are the same, it means all elements
    // in the list were identical (e.g., [5, 5, 5])
    if (max1 == max2) {
        printf("There is no second largest element (all elements are the same).\n");
    } else {
        printf("The second largest integer in the list is: %d\n", max2);
    }

    return 0; // Indicate successful execution
}