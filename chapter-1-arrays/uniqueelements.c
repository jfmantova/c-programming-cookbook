//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int exists2(const int arr[], int arraySize, int value) {
    if (arraySize > 0) {
        for (int i = 0; i < arraySize; ++i) {
            if (arr[i] == value)
                return 1;
        }
    }
    return 0;
}

int uniqueelements() {
    int size, uniqueIndex = 0;

    printf("Size of list:\n");
    scanf("%d", &size);

    int list[size], uniques[size];

    printf("Elements of list:\n");
    for (int i = 0; i < size; ++i)
        scanf("%d", &list[i]);

    for (int i = 0; i < size; ++i) {
        if (!exists2(uniques, uniqueIndex, list[i])) {
            uniques[uniqueIndex] = list[i];
            uniqueIndex++;
        }
    }

    printf("Unique elements:\n");
    for (int i = 0; i < uniqueIndex; ++i) {
        printf("%d\n", uniques[i]);
    }

    return 0;
}