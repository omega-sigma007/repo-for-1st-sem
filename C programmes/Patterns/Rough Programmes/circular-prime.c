// WAP tp check Circular Prime
#include <stdio.h>
void main()
{
    int n, x, i, f = 0, c = 0, p = 1;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (x = n; x != 0; x /= 10)
    {
        p = p * 10;
        c++;
    }
    for (i = 1, p /= 10, x = n; i <= c; i++, n = (n % p) * 10 + n / p) // Check circular prime
    {
        int isPrime = 1; // Check prime
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime != 1)
        {
            f = 1;
            break;
        }
    }
    printf("%d is %s a Circular Prime number.", x, (f == 0) ? "" : "not");
}