/*
Write a program that using printf, at least 5 characters but no more than 10 are displayed, for each datatype:
A. string B. int C. float
*/

#include <stdio.h>

int main()
{
    // String
    char str[] = "Hello World";
    printf("String: %.10s\n", str);

    // Integer
    int num = 12325;
    printf("Integer: %.5d\n", num);

    // Float
    float floatNum = 3.14159;
    printf("Float: %.3f\n", floatNum);

    return 0;
}