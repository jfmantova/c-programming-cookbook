//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>
#include <string.h>

int ifexists(char value, char arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
        if (arr[i] == value)
            return 1;
    return 0;
}

int repetitivechar(void) {
    char name[100], buffer[100];

    printf("Enter a string: ");
    scanf("%s", name);

    int length = strlen(name);
    buffer[0] = name[0];

    int i, j = 1;
    for (i = 1; i < length; ++i) {
        if (ifexists(name[i], buffer, j)) {
            printf("The first repetitive character of %s is %c.", name, name[i]);
            break;
        } else {
            buffer[j] = name[i];
            j++;
        }
    }

    if (i == length)
        printf("No repetitive character in the string %s.", name);

    return 0;
}
