//
// Created by Joao Filipe Mantova on 7/19/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BuffSize 255

void convertcase(int argc, char *argv[]) {
    FILE *file;
    char buffer[BuffSize];

    file = fopen(argv[1], "r+");
    if (file == NULL) {
        printf("File %s does not exist.\n", argv[1]);
        exit(1);
    }

    while (!feof(file)) {
        fgets(buffer, BuffSize, file);
        puts(buffer);
        int length = strlen(buffer);
        for (int i = 0; i < length; ++i) {
            if (buffer[i] == '.') {
                i++;
                while (buffer[i] == ' ') {
                    i++;
                }
                if (buffer[i] >= 97 && buffer[i] <= 122) {
                    buffer[i] = buffer[i] - 32;
                }
            }
        }
        puts(buffer);
    }
    fputs(buffer, file);

    fclose(file);
}
