//
// Created by Joao Filipe Mantova on 7/13/20.
//
#include <stdio.h>
#include <math.h>

int top = -1;
int stack[10];

void push(int);

int pop();

int isArmstrong(int);

int armstrong(void) {
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    return 0;
}

int isArmstrong(int number) {
    int i, remainder, temp, count, value;
    temp = number;
    count = 0;

    while (number > 0) {
        remainder = number % 10;
        push(remainder);
        count++;
        number = number / 10;
    }

    number = temp;
    value = 0;

    while (top >= 0) {
        i = pop();
        value = value + pow(i, count);
    }

    return value == number ? 1 : 0;
}

void push(int remainder) {
    top++;
    stack[top] = remainder;
}

int pop() {
    if (top == -1)
        return top;

    int i = stack[top];
    top--;
    return i;
}