//
// Created by Joao Filipe Mantova on 7/3/20.
//

#include <stdio.h>

#define max 100

int deletefromarray()
{
    int numbers[max], size, position;

    printf("Enter the length of the array:\n");
    scanf("%d", &size);

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i) {
        int input;
        scanf("%d", &input);
        numbers[i] = input;
    }

    printf("\nThe array is:\n");
    for (int j = 0; j < size; ++j) {
        printf("%d\n", numbers[j]);
    }

    printf("Enter the position to delete:\n");
    scanf("%d", &position);
    position--;
    for (int i = position; i < size; i++)
        numbers[i] = numbers[i + 1];

    numbers[size - 1] = 0;

    printf("Array after deleting the element is:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d\n", numbers[i]);
    }


    return 0;
}