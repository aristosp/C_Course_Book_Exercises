/*
Write a program that fills a two-dimensional array (10x10) with 100 randomly selected integers,
ranging from -100 to 100. Then, compute and display:
A. The sum of all even numbers of the array
B. The sum of all odd numbers of the array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize the random number generator
    srand(time(NULL));

    // Create a 10x10 array
    int arr[10][10];

    // Fill the array with random numbers
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = rand() % 201 - 100; // Generate a number between -100 and 100
        }
    }

    // Compute the sum of even and odd numbers
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                sumEven += arr[i][j];
            }
            else
            {
                sumOdd += arr[i][j];
            }
        }
    }

    // Display the results
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}