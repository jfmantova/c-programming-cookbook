//
// Created by Joao Filipe Mantova on 7/13/20.
//
#include <stdio.h>

int convertvowels(void) {
    char str[255];

    printf("Enter a sentence:\n");
    gets(str);

    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = c - 32;
        }
        i++;
    }

    printf("The sentence after converting vowels into uppercase is:\n");
    puts(str);
    return 0;
}
