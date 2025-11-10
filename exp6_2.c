#include <stdio.h>

int GCD(int num1, int num2) {
    num1 = (num1 < 0) ? -num1 : num1;
    num2 = (num2 < 0) ? -num2 : num2;

    if (num2 == 0) {
        return num1;
    }
    
    return GCD(num2, num1 % num2);
}

int main() {
    int a, b, result;

    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &a, &b);

    result = GCD(a, b);

    printf("\nThe Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, result);

    return 0;
}