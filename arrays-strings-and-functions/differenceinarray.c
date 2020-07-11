//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int exists(const int arr[], int arraySize, int value);

int differenceinarray() {
    int sizeA, sizeB, sizeR;

    printf("Length of list A:\n");
    scanf("%d", &sizeA);
    int listA[sizeA];

    printf("Elements of list A:\n");
    for (int i = 0; i < sizeA; ++i) {
        scanf("%d", &listA[i]);
    }

    printf("Length of list B:\n");
    scanf("%d", &sizeB);
    int listB[sizeB];

    printf("Elements of list B:\n");
    for (int i = 0; i < sizeB; ++i) {
        scanf("%d", &listB[i]);
    }

    sizeR = sizeA > sizeB ? sizeA : sizeB;
    int listResult[sizeR], indexResult = 0;

    for (int i = 0; i < sizeA; ++i) {
        int value = listA[i];
        if (!exists(listB, sizeB, value)) {
            listResult[indexResult] = value;
            indexResult++;
        }
    }

    if (indexResult > 0) {
        printf("Different elements:\n");
        for (int i = 0; i < indexResult; ++i) {
            printf("%d\n", listResult[i]);
        }
    } else {
        printf("No different elements.");
    }

    return 0;
}

int exists(const int arr[], int arraySize, int value) {
    if (arraySize > 0) {
        for (int i = 0; i < arraySize; ++i) {
            if (arr[i] == value)
                return 1;
        }
    }
    return 0;
}