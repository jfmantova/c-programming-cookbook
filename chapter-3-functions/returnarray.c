//
// Created by Joao Filipe Mantova on 7/20/20.
//
#include <stdio.h>

int *minmax(int values[], int length);

void returnarray() {
    int values[100], length;

    printf("How many values?\n");
    scanf("%d", &length);

    printf("Enter %d values:\n", length);
    for (int i = 0; i < length; ++i)
        scanf("%d", &values[i]);

    int *p = minmax(values, length);
    printf("Minimum value: %d\n", *p);
    p++;
    printf("Maximum value: %d\n", *p);
}

int *minmax(int values[], int length) {
    static int minmax[2];
    minmax[0] = values[0];
    minmax[1] = values[0];
    for (int i = 1; i < length; ++i) {
        if (minmax[0] > values[i])
            minmax[0] = values[i];

        if (minmax[1] < values[i])
            minmax[1] = values[i];
    }
    return minmax;
}