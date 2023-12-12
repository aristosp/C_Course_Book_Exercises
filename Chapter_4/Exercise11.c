/*
Write a program that reads a string from the keyboard and 
returns it in reverse order with the help of a function.
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