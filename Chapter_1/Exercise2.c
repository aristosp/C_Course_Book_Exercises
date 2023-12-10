/*
Using the code from the previous exercise, convert it in order to calculate the sum of two numbers.
*/

#include <stdio.h>
#include <stdlib.h>

//Function to compute the sum, based on the previous exercise
int sum(int x, int y)
{
    return (x + y);
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
    int a, b, c;
    printf("Pass two numbers:\n");
    a = getnum2(); // Store the inputs into two variables
    b = getnum2(); 
    c = sum(a, b); // Calculate the sum and store it
    printf("The sum of the two numbers is: %d \n", c);
    system("pause");
}