#include <stdio.h>

int countPrimes(int n)
{
    if (n <= 2)
        return 0;

    int count = 1; // Start with 1 to count the number '2'

    // Loop through ODD numbers only (3, 5, 7, 9, 11...)
    for (int i = 3; i < n; i += 2)
    {

        int isPrime = 1; // Assume 'i' is prime

        // Test division using ODD numbers only (3, 5, 7...)
        for (int j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Found a factor, not prime
                break;
            }
        }

        if (isPrime == 1)
        {
            count++;
            printf("%d ", i);
        }
    }

    return count;
}
int main()
{
    printf("\nNumber of primes = %d\n", countPrimes(5000000));
    return 0;
}