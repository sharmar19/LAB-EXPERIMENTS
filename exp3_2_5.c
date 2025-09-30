#include <stdio.h>

void findRamanujanNumbers(int limit) {
    printf("Finding Ramanujan Numbers up to %d:\n", limit);
    for (int n = 1; n <= limit; n++) {
        int count = 0;

        for (int a = 1; a * a * a < n; a++) {
            for (int b = a; b * b * b < n; b++) {
                if (a * a * a + b * b * b == n) {
                    count++;
                }
            }
        }
        
        if (count >= 2) {
            printf("%d is a Ramanujan number: ", n);
            for (int a = 1; a * a * a < n; a++) {
                for (int b = a; b * b * b < n; b++) {
                    if (a * a * a + b * b * b == n) {
                        printf("%d^3 + %d^3", a, b);
                        count--;
                        if (count > 0) {
                            printf(" and ");
                        }
                    }
                }
            }
            printf("\n");
        }
    }
}

int main() {
    int limit = 10000; 
    findRamanujanNumbers(limit);
    return 0;
}