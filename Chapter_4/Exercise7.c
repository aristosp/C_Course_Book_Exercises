/*
Write a recursive function named print_num() that has an integer parameter. This function displays numbers
from one until its input, with 10 values printed per row. Write a program that asks the user to type an integer
and using print_num() the correct numbers are displayed.
*/

#include <stdio.h>

void print_num(int n)
{
    // Base case: when n is less than or equal to zero, return back
    if (n <= 0)
    {
        return;
    }

    // Recursive case: print the numbers from 1 to n
    // Print 10 numbers per row
    print_num(n - 1);
    printf("%d\t", n);

    // Print a newline after printing 10 numbers per row
    if (n % 10 == 0)
    {
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    printf("Printing numbers from 1 to %d:\n", num);
    print_num(num);
}