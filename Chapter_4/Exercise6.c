/*
Using code() and decode() functions from the previous exercise, write a progam that has as input a string
from the command line. Then, the string is displayed coded and decoded. If no input is defined, the program
repeatedly asks to input a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void code(char *str) // coding function
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        str[i] += 1;
    }
}

void decode(char *str) // decoding function
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        str[i] -= 1;
    }
}

int main()
{
    char input[100];
    int flag = 0;
    while (flag == 0)
    {
        printf("Enter a string: ");
        fgets(input, sizeof(input), stdin);

        code(input);
        printf("Coded: %s", input);

        decode(input);
        printf("Decoded: %s", input);
        if (input != NULL){
            flag = 1;
        }
    }
}