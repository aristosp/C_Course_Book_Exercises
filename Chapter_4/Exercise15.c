/*
Write the proper functions with which an integer is transformed from a numbering system to another.
Limit in the binary, octal, hexadecimal and decimal systems. The following matrix must be completed:
Decimal         Octal           Hexadecimal         Binary
                01770
8100
                                0xAAAA
                                                    1001001001
                                                    1100101011111110
10000
                0234
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void decimalToOctal(int decimal)
{
    int octal[100], i = 0;

    while (decimal > 0)
    {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
}

void decimalToHexadecimal(int decimal)
{
    char hexadecimal[100];
    int i = 0;

    while (decimal > 0)
    {
        int remainder = decimal % 16;

        if (remainder < 10)
        {
            hexadecimal[i++] = remainder + 48;
        }
        else
        {
            hexadecimal[i++] = remainder + 55;
        }

        decimal /= 16;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
}

void decimalToBinary(int decimal)
{
    int binary[100], i = 0;

    while (decimal > 0)
    {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int octalToDecimal(int octal)
{
    int decimal = 0, i = 0;

    while (octal != 0)
    {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        i++;
    }

    return decimal;
}

int hexadecimalToDecimal(char hexadecimal[])
{
    int decimal = 0;
    int length = strlen(hexadecimal);
    int base = 1;

    for (int i = length - 1; i >= 0; i--)
    {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
        {
            decimal += (hexadecimal[i] - 48) * base;
            base *= 16;
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
        {
            decimal += (hexadecimal[i] - 55) * base;
            base *= 16;
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
        {
            decimal += (hexadecimal[i] - 87) * base;
            base *= 16;
        }
    }

    return decimal;
}

int binaryToDecimal(int binary)
{
    int decimal = 0, i = 0;

    while (binary != 0)
    {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main()
{
    int decimal1 = 8100;
    int octal1 = 0234;
    int hexadecimal1 = 0xAAAA;
    int binary1 = 1001001001;
    long int binary2 = 1100101011111110;
    int decimal2 = 10000;

    printf("Decimal to Octal: ");
    decimalToOctal(decimal1);
    printf("\n");

    printf("Decimal to Hexadecimal: ");
    decimalToHexadecimal(decimal1);
    printf("\n");

    printf("Decimal to Binary: ");
    decimalToBinary(decimal1);
    printf("\n");

    printf("Octal to Decimal: %d\n", octalToDecimal(octal1));

    printf("Hexadecimal to Decimal: %d\n", hexadecimalToDecimal("AAAA"));

    printf("Binary to Decimal: %d\n", binaryToDecimal(binary1));

    return 0;
}