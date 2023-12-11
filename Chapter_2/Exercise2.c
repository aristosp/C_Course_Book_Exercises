/*
Write a program that applies the 3 bitwise operators (&, |, ^) in the following expressions:
A. x1='A', x2='B'   C. z1=67, z2='C'
B. y1=12, y2=7      D. a1=-15, a2='K'
and print the results.
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    char x1 = 'A', x2 = 'B', z2 = 'C', a2 = 'K';
    int y1 = 12, y2 = 7, z1 = 67, a1 = -15;
    // A
    printf("%c\n", x1 & x2);
    printf("%c\n", x1 | x2);
    printf("%c\n", x1 ^ x2);

    // B
    printf("%c\n", y1 & y2);
    printf("%c\n", y1 | y2);
    printf("%c\n", y1 ^ y2);

    // C
    printf("%c\n", z1 & z2);
    printf("%c\n", z1 | z2);
    printf("%c\n", z1 ^ z2);

    // D
    printf("%c\n", a1 & a2);
    printf("%c\n", a1 | a2);
    printf("%c\n", a1 ^ a2);
}