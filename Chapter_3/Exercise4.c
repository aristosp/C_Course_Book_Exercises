/*
Write a function that has as input parameter a single character.
If the character is one of 'a', 'b', 'c', 'd' return the same character,
else return character '0'. Use switch command.
*/

#include <stdio.h>

int main(){
    char c;
    printf("Type a character \n");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
        printf("%c", c);
        break;
    case 'b':
        printf("%c", c);
        break;
    case 'c':
        printf("%c", c);
        break;
    case 'd':
        printf("%c", c);
        break;
    default:
        printf("0");
        break;
    }
}