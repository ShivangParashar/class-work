//WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read 
//matrix A and matrix B in row major order respectively. Print both the input matrices and resultant 
//matrix with suitable headings and output should be in matrix format only. Program must check 
//the compatibility of orders of the matrices for multiplication. Report appropriate message in case 
//of incompatibility. 
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Input dimensions of matrix A
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input elements of matrix A
    printf("Enter elements of matrix A in row major order:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of matrix B
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    // Input elements of matrix B
    printf("Enter elements of matrix B in row major order:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check compatibility for multiplication
    if (n != p) {
        printf("Incompatible matrices for multiplication (columns of A must equal rows of B).\n");
        return 0;
    }

    int C[m][q];

    // Initialize resultant matrix C to zero
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Compute the product of A and B
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }

        }
    }
    // Print matrix A
    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    // Print matrix B
    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    // Print resultant matrix C
    printf("Resultant Matrix C (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

