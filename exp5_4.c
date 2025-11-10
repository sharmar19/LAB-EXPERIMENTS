#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q; 
    int i, j, k;   
    int sum;

    printf("Enter the number of rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nError: Matrix multiplication is not possible.\n");
        printf("The number of columns in Matrix A (%d) must be equal to the number of rows in Matrix B (%d).\n", n, p);
        return 1;
    }

    if (m > 10 || n > 10 || p > 10 || q > 10) {
        printf("\nError: Dimensions exceed the program limit of 10x10.\n");
        return 1;
    }

    printf("\nEnter the elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the elements of Matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {   
        for (j = 0; j < q; j++) {  
            sum = 0;
            for (k = 0; k < n; k++) { 
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    printf("\n\nMatrix A (%d x %d) \n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B (%d x %d)\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix C (A x B) (%d x %d)\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}