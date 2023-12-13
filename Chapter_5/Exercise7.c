/*
Write a program that reverses, with the use of pointers, a 14 character long string, which
are created by a random generating function and display it on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define STRING_LENGTH 14

void generateRandomString(char *str)
{
    int i;
    for (i = 0; i < STRING_LENGTH; i++)
    {
        str[i] = 'A' + rand() % 26; // Generating random uppercase letters
    }
    str[i] = '\0'; // Null-termination
}

void reverseString(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    srand(time(NULL)); // Initialize random seed

    char str[STRING_LENGTH + 1]; // +1 for null-termination
    generateRandomString(str);

    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}