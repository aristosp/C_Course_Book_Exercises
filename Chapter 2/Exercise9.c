/*
Write a program that will allow the input of a string and 
two integers and then displays them for check, using scanf.
*/

#include <stdio.h>

int main()
{
    char mystr[100];
    int x, y;
    printf("Type a string(100 characters long): \n");
    // Store user input
    scanf("%s", &mystr);
    printf("Type two integers: \n");
    // Store user input
    scanf("%d  %d", &x, &y);
    // Return user input
    printf("String was %s\n", mystr);
    printf("Integers were %d and %d\n", x, y);
}