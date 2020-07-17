//
// Created by Joao Filipe Mantova on 7/17/20.
//


#include <stdio.h>

void main() {

    char str[255], *pointer1, *pointer2, temp;
    int length, position;

    printf("Enter a string:\n");
    scanf("%s", str);
    pointer1 = str;
    length = 1;

    while (*pointer1 != '\0') {
        pointer1++;
        length++;
    }

    pointer1--;
    pointer2 = str;
    position = 1;
    while (position <= length / 2) {
        temp = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = temp;
        pointer1--;
        pointer2++;
        position++;
    }

    printf("Revere string is: %s\n", str);
}