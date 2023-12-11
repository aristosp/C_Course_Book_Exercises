/*
Write a program that reads an integer from the keyboard and displays the message "hello student"
as many times as that integer. If the number is negative, the program terminates.
*/

#include <stdio.h>

int main(){
    int x, count = 0;
    printf("Type an integer number \n");
    scanf("%d", &x);
    if (x <= 0){
        printf("Typed negative number or zero");
    }
    while (count != x){
        printf("hello student\n");
        count++;
    }
}