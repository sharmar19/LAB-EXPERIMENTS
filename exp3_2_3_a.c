#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 3 - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}