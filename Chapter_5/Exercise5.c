/*
Write a program that requires the dimensions of two two-dimensional arrays, with
maximum dimensions equal to 10 or lower, and the values for each of the arrays index (positive integers)
and after checking the two arrays, their addition must be computed.
*/

#include <stdio.h>

// Function to add two arrays
void addArrays(int arr1[][10], int arr2[][10], int result[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    int arr1[10][10], arr2[10][10], result[10][10];
    int rows, cols;

    // Prompt the user for the dimensions of the arrays
    printf("Enter the number of rows (<= 10): ");
    scanf("%d", &rows);

    printf("Enter the number of columns (<= 10): ");
    scanf("%d", &cols);

    // Prompt the user for the values of the first array
    printf("Enter the values for the first array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Prompt the user for the values of the second array
    printf("Enter the values for the second array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Compute the addition of the two arrays
    addArrays(arr1, arr2, result, rows, cols);

    // Print the addition result
    printf("Addition result:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}