#include <stdio.h>
void main()
{
    int n, m, i = 2, gcd;
    printf("Enter the 2 no. = ");
    scanf("%d%d", &m, &n);
    for (; i <= n; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i; // gcd = gcd * i -> wrong
        }
    }
    printf("GCD(%d,%d) = %d", m, n, gcd);
}