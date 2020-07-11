//
// Created by Joao Filipe Mantova on 7/11/20.
//
#include <stdio.h>
#include <string.h>

int palindrome(void) {
    char str[80], reverse[80];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    int j = 0;
    for (int i = length - 1; i >= 0 ; i--) {
        reverse[j] = str[i];
        j++;
    }
    reverse[j] = '\0';

    if (strcmp(str, reverse) == 0)
        printf("The word %s is a palindrome.", str);
    else
        printf("The word %s is not a palindrome.", str);

    return 0;
}
