//
// Created by Joao Filipe Mantova on 8/4/20.
//
#include <stdio.h>
#include <math.h>

int ctop = -1, stack[10];

void cpush();

int cpop();

int isPalindrome(int);

void findpalindrome(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome number.", number);
    else
        printf("%d is not a palindrome number.", number);
}

int isPalindrome(int number)
{
    int i, value, remainder, temp, count;
    temp = number;
    while (number > 0)
    {
        remainder = number % 10;
        cpush(remainder);
        number = number / 10;
    }

    number = temp;
    while (ctop >= 0)
    {
        i = cpop();
        value = value + (i * pow(10, count));
        count++;
    }

    return (number == value);
}

void cpush(int value)
{
    ctop++;
    stack[ctop] = value;
}

int cpop()
{
    if (ctop == -1)
        return ctop;

    int i = stack[ctop];
    ctop--;
    return i;
}