/*
Write a program that asks from the user to type an integer and then it computes and displays
the prime numbers which are less than the given number. Restriction is that 6 numbers must be
displayer per line and in 8 characters must be between each number. Also, the number of prime numbers which are 
less than the given must be computed.
*/

#include <stdio.h>

int isPrime(int num)
// The isPrime function checks if a number is prime by iterating from 2 to the square root of the number 
// and checking if there is any divisor that evenly divides the number
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Prime numbers less than %d:\n", num);

    int count = 0;
    for (int i = 2; i < num; i++)
    {
        // print out prime numbers with the required spacing
        if (isPrime(i))
        {
            printf("%8d", i);
            count++;
            if (count % 6 == 0)
            {
                printf("\n");
            }
        }
    }

  printf("\nNumber of prime numbers: %d\n", count);

  return 0;
}