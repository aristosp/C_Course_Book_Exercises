/*
Write a recursive function that calculates the i-th factor of a Fibonacci sequence, computed by:
U_1 = 1, U_2 = 1, U_n = U_n-1 + U_n-2, n>2
The main program should compute the maximum factor of the sequence, which can be calculated when U is declared
as : int, long, double, long double.
*/

#include <stdio.h>

// Function to calculate the i-th factor of a Fibonacci sequence
long double fibonacciFactor(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibonacciFactor(n - 1) + fibonacciFactor(n - 2);
}

int main()
{
    int n;
    printf("Enter the index of the factor you want to calculate: ");
    scanf("%d", &n);

    long double factor = fibonacciFactor(n);
    printf("Factor: %Lf \n", factor);
    
    return 0;
}