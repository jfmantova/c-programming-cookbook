//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int mergetwosortedarrays(void) {
    int sizeA, sizeB, sizeResult;
    printf("Size of list A:\n");
    scanf("%d", &sizeA);

    int listA[sizeA];
    {
        printf("Elements of list A:");
        for (int i = 0; i < sizeA; ++i) {
            printf("\n%d-", i + 1);
            scanf("%d", &listA[i]);
        }
    }

    printf("Size of list B:\n");
    scanf("%d", &sizeB);

    int listB[sizeB];
    {
        printf("Elements of list B:");
        for (int i = 0; i < sizeB; ++i) {
            printf("\n%d-", i + 1);
            scanf("%d", &listB[i]);
        }
    }


    {
        sizeResult = sizeA + sizeB;
    }

    int listResult[sizeResult];

    int i, j, k;
    i = j = k = 0;

    while (i < sizeA && j < sizeB) {
        if (listA[i] < listB[j]) {
            listResult[k] = listA[i];
            ++i;
            ++k;
        } else if (listA[i] > listB[j]) {
            listResult[k] = listB[j];
            ++j;
            ++k;
        } else {
            listResult[k] = listA[i];
            ++i;
            ++k;
            listResult[k] = listB[j];
            ++j;
            ++k;
        }
    }

    while (i < sizeA) {
        listResult[k] = listA[i];
        ++i;
        ++k;
    }

    while (j < sizeB) {
        listResult[k] = listB[j];
        ++j;
        ++k;
    }

    printf("The combined sorted array is:\n");
    for (int i = 0; i < sizeResult; ++i) {
        printf("%d\n", listResult[i]);
    }

    return 0;
}
