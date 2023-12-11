/*
Write a program that displays the integer numbers from 1 to 10 in the screen.
Use three different loop-statements and do not use goto command.
*/

#include <stdio.h>

int main(){
    int i = 0;
    // first loop
    for (i = 0; i <= 10; i++){
        printf("%d \n",i);
    }
    // second loop
    i = 0;
    while (i<=10){
        printf("%d \n", i);
        i++;
    }
    // third loop
    i = 0;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i<=10);
    
}