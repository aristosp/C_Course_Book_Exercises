/*
Write a program that sorts in ascending order a string. The program reads 10 names and then,
these names are displayed on screen in ascending alphabetical order.
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Max Size of a name

void sortNames(char names[][MAX_SIZE], int size)
{
    int i, j;
    char temp[MAX_SIZE];
    // Iterate each name and compare the letters to see the order and swap if necessary
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
{
    char names[10][MAX_SIZE];
    int i;

    printf("Enter 10 names:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_SIZE, stdin);

        // Remove newline character
        names[i][strcspn(names[i], "\n")] = 0;
    }

    sortNames(names, 10);

    printf("\nThe names in ascending order are:\n");
    for (i = 0; i < 10; i++)
    {
    printf("%s \t", names[i]);
    }

    return 0;
}
