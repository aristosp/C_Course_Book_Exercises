/*
Write a program that calculates the value of:
z = a - ((b/(3+c)) *  2) - 1
with a=9, b=12, c=-2.
*/

#include <stdio.h>

int main(){
    float a = 9, b = 12, c = -2, z;
    z = a - ((b / (3 + c)) * 2) - 1;
    printf("Z is equal to %f \n", z);
    printf("With a = %f, b = %f, c = %f", a, b, c);
}