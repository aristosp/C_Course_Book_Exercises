/*
Write a program that asks the user to type a number between -25 and 25. Write a recursive function
that has an integer parameter and displays the numbers starting from its parameter value and ending in the number 7 on screen.
*/

#include <stdio.h>

void displayNumbers(int n)
{
    printf("%d ", n);
    if (n == 7) // In case the input is 7, return
    {
        return;
    }
    else if (n < 7) // In case the input is lower than seven, recursively display the next number n+1 on screen
    {
        displayNumbers(n + 1);
    }
    else // Else, recursively display the next number n-1 on screen
    {
        displayNumbers(n - 1);
    }
}

int main()
{
    int number;

    printf("Enter a number between -25 and 25: ");
    scanf("%d", &number);
    // Check whether the input is within limits
    if (number >= -25 && number <= 25)
    {
        printf("\nNumbers starting from %d and ending at 7: ", number);
        displayNumbers(number);
    }
    else
    {
        printf("\nInvalid number input!");
    }

    return 0;
}