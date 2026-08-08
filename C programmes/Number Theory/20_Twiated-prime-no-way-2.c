#include <stdio.h>
void main()
{
    int n, i = 2, j = 2, rev = 0, x, f = 0, g = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    // Reverse
    for (x = n; n > 0; n = n / 10)
    {
        rev = rev * 10 + n % 10;
    }
    printf("n = %d\n", x);
    printf("rev = %d\n", rev);
    // Prime check
    for (; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            printf("%d is divisible by %d\n", x, i);
            f = 1;
            break;
        }
    }
    (f == 0) ? printf("%d = prime\n", x) : printf("%d = not prime\n", x);
    for (i = 2; i <= rev / 2; i++)
    {
        if (rev % i == 0)
        {
            printf("%d is divisible by %d\n", rev, i);
            g = 1;
            break;
        }
    }
    (g == 0) ? printf("%d = prime\n", rev) : printf("%d = not prime\n", rev);
    (f == 1 || g == 1) ? printf("%d = Not Twisted Prime no.", x) : printf("%d = Twisted Prime no.", x);
}
