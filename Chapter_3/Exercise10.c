/*
Write a program that asks the user to type a number in binary format, with exactly 10 bits and then compute
and display the corresponding decimal. DO NOT USE strtol() to convert. For example, 1010101011 in binary
is equal to 683 in decimal.
*/

#include <stdio.h>

int main()
{
    int binaryNumber, decimalNumber = 0, base = 1, remainder;

    // Ask the user to enter a binary number
    printf("Enter a binary number with exactly 10 bits: ");
    scanf("%d", &binaryNumber);

    // Convert the binary number to decimal
    while (binaryNumber > 0)
    {
        remainder = binaryNumber % 10;
        decimalNumber = decimalNumber + remainder * base; 
        binaryNumber = binaryNumber / 10;
        base = base * 2;
    }

    // Display the decimal number
    printf("The decimal equivalent is: %d", decimalNumber);

}
