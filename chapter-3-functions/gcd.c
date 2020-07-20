//
// Created by Joao Filipe Mantova on 7/20/20.
//
#include <stdio.h>

int gcd(int x, int y);

void maingcd() {
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = gcd(x, y);
    printf("The greatest common divisor of %d and %d is %d", x, y, result);
}

int gcd(int x, int y) {
    static int result;
    int remainder = x % y;
    if (remainder == 0) {
        result = y;
        return result;
    } else {
        gcd(y, remainder);
    }
    return result;
}
