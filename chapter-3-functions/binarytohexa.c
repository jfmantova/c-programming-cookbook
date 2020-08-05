//
// Created by Joao Filipe Mantova on 7/22/20.
//
#include <stdio.h>
#include <math.h>

int mtop = -1;
int mstack[10];

void mpush(int);

int mpop();

int intodecimal(int);

void intohexa(int, int);

char prnhexa(int);


void binarytohexa(void)
{
    int binary, decimal;
    printf("Enter a number in binary number:\n");
    scanf("%d", &binary);

    decimal = intodecimal(binary);
    printf("The decimal of binary number %d is %d\n", binary, decimal);
    intohexa(binary, decimal);
}

int intodecimal(int binary)
{
    int decimal, remainder, exp, i;
    while (binary > 0)
    {
        remainder = binary % 10;
        mpush(remainder);
        binary = binary / 10;
    }

    exp = mtop;
    while (mtop >= 0)
    {
        i = mpop();
        decimal = decimal + i * pow(2, exp);
        exp--;
    }

    return decimal;
}

void mpush(int number)
{
    mtop++;
    mstack[mtop] = number;
}

int mpop()
{
    if (mtop == -1)
        return mtop;

    int i = mstack[mtop];
    mtop--;
    return i;
}

void intohexa(int binary, int decimal)
{
    int remainder, i;
    while (decimal > 0)
    {
        remainder = decimal % 16;
        mpush(remainder);
        decimal = decimal / 16;
    }
    printf("The hexa decimal format of binary number %d is ", binary);
    while (mtop >= 0)
    {
        i = mpop();
        if (i < 10)
            printf("%d", i);
        else
            printf("%c", prnhexa(i));
    }
}

char prnhexa(int value)
{
    switch (value)
    {
        case 10:
            return 'A';
        case 11:
            return 'B';
        case 12:
            return 'C';
        case 13:
            return 'D';
        case 14:
            return 'E';
        case 15:
            return 'F';
        default:
            return '0';
    }
}