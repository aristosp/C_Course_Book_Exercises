/*
Write a program that asks from the user to type a text that will be completed when
'~' is pressed and that computes the number of characters, words and lines that have been typed.
*/

#include <stdio.h>

int main()
{
    char text[1000];
    int characterCount = 0;
    int wordCount = 0;
    int lineCount = 0;

    printf("Type your text and press enter. Press '~' to complete:\n");

    while (1)
    {
        char ch = getchar();

        if (ch == '~')
            break;

        text[characterCount] = ch;
        characterCount++;

        // Check for end of word or line
        if (ch == ' ' || ch == '\n')
            wordCount++;
        if (ch == '\n')
            lineCount++;
    }

    // Account for the last word and line
    if (characterCount > 0)
    {
        wordCount++;
        lineCount++;
    }

    printf("Number of characters: %d \n", characterCount);
    printf("Number of words: %d \n", wordCount);
    printf("Number of lines: %d \n", lineCount);

    return 0;
}