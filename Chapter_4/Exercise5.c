/*
Write two functions, named code() and decode(), each one having as input a string. Code() should modify
its input adding 1 to all its characters except the last 0. Decode() should restore the string to it's original value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void code(char *str) //coding function
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        str[i] += 1;
    }
}

void decode(char *str) //decoding function
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        str[i] -= 1;
    }
}

int main()
{
    char str[] = "Hello World!0";
    printf("Original String: %s\n", str);

    code(str);
    printf("Encoded String: %s\n", str);

    decode(str);
    printf("Decoded String: %s\n", str);

    return 0;
}