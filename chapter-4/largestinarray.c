//
// Created by Joao Filipe Mantova on 7/17/20.
//

#include <stdio.h>

void main() {
    int numbers[255], length;
    printf("How many elements?\n");
    scanf("%d", &length);

    printf("Enter %d elements:\n", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &numbers[i]);
    }

    int *max = numbers;
    int *pointer = numbers;

    for (int i = 0; i < length; ++i) {
        if (*max < *pointer)
            max = pointer;
        pointer++;
    }

    printf("Largest value is %d.", *max);
}