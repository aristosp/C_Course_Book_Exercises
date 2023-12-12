/*
Write a program that displays to the screen the prime numbers that are less than 1000. The common algorithm deriving from
the definition of a prime number is probably the simplest. Search and apply a more efficient calculation algorithm of prime numbers.
*/

#include <stdio.h>
#include <stdbool.h>

#define LIMIT 1000

void sieveOfEratosthenes()
{
    bool primes[LIMIT + 1];
    for (int i = 0; i <= LIMIT; i++)
        primes[i] = true; // Initially all numbers are set to prime
    // Then, we iterate from 2 to the square root of LIMIT, and if a number p is marked as prime, we update the multiples of p as non-prime.
    for (int p = 2; p * p <= LIMIT; p++)
    {
        if (primes[p] == true)
        {
            for (int i = p * p; i <= LIMIT; i += p)
                primes[i] = false;
        }
    }

    for (int p = 2; p <= LIMIT; p++)
    {
        if (primes[p])
            printf("%d ", p);
    }
}

int main()
{
    printf("Prime numbers less than 1000:\n");
    sieveOfEratosthenes();
    return 0;
}