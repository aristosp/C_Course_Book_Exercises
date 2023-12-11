/*
Write a program that when its run starts, it reads an integer less than 10 (check to see if this condition is true is mandatory)
from the keyboard and display the message 'hello student' as many times as the integer that has been typed. The program stops
if the input is zero or negative.
*/

#include <stdio.h>

int main()
{
    int x, count = 0;
    printf("Type an integer number \n");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("Typed negative number or zero");
    }
    else if (x > 10){
        printf("Number larger than ten");
    }
    else{
        while (count != x)
        {
            printf("hello student\n");
            count++;
        }
    }
}