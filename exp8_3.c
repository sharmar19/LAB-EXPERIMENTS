#include <stdio.h>

void modifyValues(int *ptr_a, int *ptr_b) {
    *ptr_a = *ptr_a * 2;
    *ptr_b = *ptr_b + 100;
}

int main() {
    
    int num1 = 10;
    int num2 = 25;

    printf("--- Before Function Call ---\n");
    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);

    modifyValues(&num1, &num2);

    printf("\n--- After Function Call ---\n");
    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);

    return 0;
}