#include "header.h"

int* matrix_addition(size_t n, int matrix_a[n][n], int matrix_b[n][n]) {
    int *matrix_sum = (int *)malloc(sizeof(int *) * n * n);

    for (int i = 0, k = 0; i < n; ++i)
        for (int j = 0; j < n; ++j, ++k)
            matrix_sum[k] = matrix_a[i][j] + matrix_b[i][j];
    return matrix_sum;
}
