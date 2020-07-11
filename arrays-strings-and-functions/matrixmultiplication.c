//
// Created by Joao Filipe Mantova on 7/3/20.
//

#include <stdio.h>

int main() {
    /*
     * A prerequisite for multiplying two matrices is that
     * the number of columns in the first matrix must be equal
     * to the number of rows in the second matrix.
     */
    int
            ax = 2, ay = 3,
            bx = 3, by = 4,
            rx = 2, ry = 4;

    int matrixA[ax][ay], matrixB[bx][by], matrixResult[rx][ry];

    printf("Enter elements of the first matrix of order 2x3:\n");
    for (int i = 0; i < ax; ++i) {
        for (int j = 0; j < ay; ++j) {
            scanf("%d", &matrixA[i][j]);
//            matrixA[i][j] = i + j;
        }
    }

    printf("Enter elements of the second matrix of order 3x4:\n");
    for (int i = 0; i < bx; ++i) {
        for (int j = 0; j < by; ++j) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < rx; ++i) {
        for (int j = 0; j < ry; ++j) {
            matrixResult[i][j] = 0;
            for (int k = 0; k < ay; ++k) {
                matrixResult[i][j] = matrixResult[i][j] + matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    for (int i = 0; i < rx; ++i) {
        for (int j = 0; j < ry; ++j) {
            printf("%d ", matrixResult[i][j]);
        }
        printf("\n");
    }

    return 0;
}