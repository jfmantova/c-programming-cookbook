//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>

int main()
{
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
        for (int j = 0; j < sizeB; ++j) {
            if (listA[i] == listB[j]) {

                int existsInResult = 0;
                for (int k = 0; k < sizeR; ++k) {
                    if (listA[i] == listResult[k]) {
                        existsInResult = 1;
                        break;
                    }
                }

                if (!existsInResult) {
                    listResult[indexResult] = listA[i];
                    ++indexResult;
                }
            }
        }
    }

    if (indexResult > 0) {
        printf("Elements in common:\n");
        for (int i = 0; i < indexResult; ++i) {
            printf("%d\n", listResult[i]);
        }
    } else {
        printf("No elements in common.");
    }

    return 0;
}