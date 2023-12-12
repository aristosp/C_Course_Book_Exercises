/*
Write a function named power() with two integer parameters. The first parameter is the base and the second is the exponential.
We want the first parameter of power () to contain the answer after the function's return. Use the return value to state the overflow,
returning 1 if the operation was successful and 0 if overflow occured. Both parameters are positive numbers.
Reminder: when overflow occurs, the number must become negative.
*/

#include <stdio.h>
#include <limits.h>

int power(int *base, int exponential)
{
    /*
    The function calculates the result by iteratively multiplying the base number. If an overflow occurs during the calculation, 
    the base number is made negative and the function returns 0 to indicate overflow. Otherwise, 
    it updates the base number with the result and returns 1 to indicate success
    */
    int result = 1;

    for (int i = 0; i < exponential; i++)
    {
        if (*base > INT_MAX / result)
        {
            *base *= -1;
            return 0; // Overflow occurred
        }
        result *= *base;
    }

    *base = result;
    return 1; // Operation successful
}

int main()
{
    int base = 2;
    int exponential = 10;

    int success = power(&base, exponential);

    if (success)
        printf("Result = %d\n", base);
    else
        printf("Overflow occurred, Result = %d\n", base);
    
    return 0;
}