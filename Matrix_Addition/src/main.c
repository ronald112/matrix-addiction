#include "header.h"

static void fill_matrix(size_t n, int matrix_a[][n]) {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix_a[i][j] = rand() % n;
        }
    }
}

static void show_matrix(size_t n, int matrix_a[][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d", matrix_a[i][j]);
        }
        printf("\n");
    }
    
}


int main() {
    const int size = 10;
    int a[size][size], b[size][size];

    fill_matrix(size, a);
    printf("Matrix a\n");
    show_matrix(size, a);

    sleep(1);

    fill_matrix(size, b);
    printf("Matrix b\n");
    show_matrix(size, b);
    int *sum = matrix_addition(size, a, b);

    printf("Matrix sum\n");
    for (int i = 0; i < size * size; ++i)
        if (i % size == 0)
            printf("\n");
        else
            printf("%5d", sum[i]);
    printf("\n");
    return 0;
}
