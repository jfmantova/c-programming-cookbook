//
// Created by Joao Filipe Mantova on 7/12/20.
//
#include <stdio.h>
#include <string.h>

int countofeach(void) {
    const int charSize = 80;
    char str[charSize], chr[charSize];

    printf("Enter a word: ");
    scanf("%s", str);

    const int wordLength = strlen(str);

    int index = 0, counter[80];

    for (int i = 0; i < wordLength; ++i) {
        if (i == 0) {
            chr[i] = str[i];
            counter[i] = 1;
            index++;
            continue;
        }

        char letter = str[i];
        int sameLetterIndex = -1;
        for (int j = 0; j <= index; ++j) {
            if (chr[j] == letter) {
                sameLetterIndex = j;
                break;
            }
        }

        if (sameLetterIndex >= 0) {
            counter[sameLetterIndex] = ++counter[sameLetterIndex];
        } else {
            chr[index] = letter;
            counter[index] = 1;
            index++;
        }
    }

    chr[index + 1] = '\0';

    for (int i = 0; i < index; ++i) {
        printf("%c - %d\n", chr[i], counter[i]);
    }

    return 0;
}
