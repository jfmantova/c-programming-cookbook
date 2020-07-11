//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int identitymatrix(void) {
    /* All the elements of the principal diagonal of the  Identity matrix  are
   ones and rest all are zero elements  */

    static int arr[100][100];

    int rows, columns;
    printf("How many rows and columns are in this matrix?\n");
    scanf("%d %d", &rows, &columns);

    if (rows != columns)
        return printf("An identity matrix is a square matrix.");

    printf("Enter elements in the matrix:\n");
    int isIdentity = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                if (arr[i][j] != 1)
                    isIdentity = 0;
            } else {
                if (arr[i][j] != 0)
                    isIdentity = 0;
            }
        }
    }

    if (isIdentity)
        printf("An identity matrix.");
    else
        printf("Not an identity matrix.");


    return 0;
}