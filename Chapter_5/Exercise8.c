/*
Write a program that accepts an input of maximum 100 characters from the command line. Then,
the input should be printed first coded and then decoded. If no input is given, the program should return
to ask for an input. The coding function modifies its input by adding 1 to every character expect its ending 0.
The decoding function should restore its input to its original form.
*/

#include <stdio.h>
#include <string.h>

void code(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '0')
        {
            i++;
            continue;
        }
        str[i] = str[i] + 1;
        i++;
    }
}

void decode(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '0')
        {
            i++;
            continue;
        }
        str[i] = str[i] - 1;
        i++;
    }
}

int main()
{
    char input[101];

    do
    {
        printf("Enter input: ");
        fgets(input, sizeof(input), stdin);
    } while (input[0] == '\n');

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

    printf("\nOriginal input: %s\n", input);
    
    code(input);
    printf("Coded input: %s\n", input);
    
    decode(input);
    printf("Decoded input: %s\n", input);

    return 0;
}