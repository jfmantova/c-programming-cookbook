//
// Created by Joao Filipe Mantova on 7/13/20.
//
#include <stdio.h>

int countvowelsandcons(void) {
    char str[255];
    int i, vowels, consonants;
    i = vowels = consonants = 0;

    printf("Enter a sentence:\n");
    gets(str);

    while (str[i] != '\0') {
        char c = str[i];
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
                || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels are: %d\nNumber of consonants are: %d\n", vowels, consonants);

    return 0;
}
