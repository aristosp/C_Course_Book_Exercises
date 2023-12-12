/*
Write a function, named print_rev() that reads a string from the keyboard and
prints it in reverse, for example hello is written as olleh
*/

#include <stdio.h>
#include <string.h>

void print_rev()
{
    char str[100]; // assuming the input string will not exceed 99 characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove the trailing newline character

    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    print_rev();
}
