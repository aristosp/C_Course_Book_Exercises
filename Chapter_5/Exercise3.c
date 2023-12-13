/*
Write a program that reads two strings, char1 and char2 from the keyboard and that deletes
all the common characters from char1 and char2. Use two pointers p1, p2 and the function strcmp().
*/

#include <stdio.h>
#include <string.h>

void deleteCommonCharacters(char *str1, char *str2)
{
    char *p1 = str1;
    char *p2 = str2;

    while (*p1 != '\0') // iterate over each character
    {
        p2 = str2;
        while (*p2 != '\0')
        {
            if (*p1 == *p2)
            {
                memmove(p1, p1 + 1, strlen(p1)); // remove common characters
                break;
            }
            p2++;
        }
        if (*p2 == '\0')
        {
            p1++;
        }
    }
}

int main()
{
    char char1[100];
    char char2[100];

    printf("Enter the first string: ");
    fgets(char1, sizeof(char1), stdin);
    char1[strcspn(char1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(char2, sizeof(char2), stdin);
    char2[strcspn(char2, "\n")] = '\0';

    deleteCommonCharacters(char1, char2);

    printf("String 1 after deleting common characters: %s\n", char1);
    printf("String 2 after deleting common characters: %s\n", char2);

    return 0;
}
