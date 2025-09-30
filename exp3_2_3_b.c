#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {

        for (int s = 0; s < rows - 1 - i; s++) {
            printf(" ");
        }

        long long coeff = 1;
        for (int j = 0; j <= i; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%lld", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}