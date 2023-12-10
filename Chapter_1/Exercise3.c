/*
Using the code from the previous exercise, convert it in order to calculate the product of five numbers.
*/

#include <stdio.h>
#include <stdlib.h>

// Function that calculates the product of two input parameters
int mul(int x, int y)
{
    return (x * y);
}

// Function that converts input strings to integers
int getnum2()
{
    char s[80];
    gets(s);
    return atoi(s);
}

int main()
{
    int a, b, c, d, e, prod1, prod2, prod3, prod;
    printf("Pass five numbers:\n");
    // Store the inputs into five variables
    a = getnum2();
    b = getnum2();
    c = getnum2();
    d = getnum2();
    e = getnum2();
    // Calculate the products step by step
    prod1 = mul(a, b);
    prod2 = mul(prod1, c);
    prod3 = mul(prod2, d);
    prod = mul(prod3, e);
    printf("The product of the five numbers is: %d \n", prod);
    system("pause");
}