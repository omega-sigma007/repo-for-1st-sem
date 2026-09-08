#include <math.h>
int countPrimes(int n)
{
    int i, j, count = 0, f = 0;
    if (n >= 0 && n <= 5 * pow(10, 6))
    {
        for (i = 2, f = 0; i < n; i++)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                count++;
        }
    }
    return count;
}