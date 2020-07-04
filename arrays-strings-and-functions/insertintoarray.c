//
// Created by Joao Filipe Mantova on 7/3/20.
//

#include <stdio.h>

#define max 100

int insertintoarray() {
    int p[max], size, position;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    printf("Print %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &p[i]);

    printf("\nThe array is:\n");
    for (int i = 0; i < size; i++)
        printf("%d\n", p[i]);

    printf("\nEnter position where to insert: ");
    scanf("%d", &position);
    position--;
    for (int i = size - 1; i >= position; i--)
        p[i + 1] = p[i];

    printf("\nEnter value to insert: ");
    scanf("%d", &p[position]);

    printf("\nArray after insertion of element:\n");
    for (int i = 0; i <= size; i++)
        printf("\n%d", p[i]);

    return 0;
}
