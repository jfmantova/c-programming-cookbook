//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int sparsematrix() {
    /*A sparse matrix has more zero elements than nonzero elements */
    int rows, columns, control = 0;
    printf("How many rows and columns in the matrix?\n");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("row: %d - column: %d\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                control++;
        }
    }

    if (control > ((rows * columns) / 2)) {
        printf("The given matrix is a sparse matrix. \n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    printf("There are %d number of zeros in the matrix.\n", control);
    return 0;
}
