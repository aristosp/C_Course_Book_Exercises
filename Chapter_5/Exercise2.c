/*
Write a function that swaps the value of two integer, only when 
the first parameter is higher than the second one.
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int x = 10, y = 2;
    printf("Original values x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("New values x = %d, y = %d\n", x, y);
}