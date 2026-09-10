// Leetcode problem 204
#include <math.h>
#include <stdio.h>
int countPrimes(int n)
{
    int i, j, count = 0, f = 0;
    if (n >= 0 && n <= 5 * pow(10, 6))
    {
        for (i = 2; i < n; i++)
        {
            for (j = 2, f = 0; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    f = 1;
                    j = i;
                }
            }
            if (f == 0)
            {
                count++;
                printf("%d ", i);
            }
        }
    }
    return count;
}
int main()
{
    printf("\nNumber of primes = %d\n", countPrimes(2));
    return 0;
}