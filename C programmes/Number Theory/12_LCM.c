#include <stdio.h> //sir
void main()
{
    int n, m, i = 2, lcm, gcd;
    printf("Enter the 2 no. = ");
    scanf("%d%d", &m, &n);
    for (; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
            gcd = i;
    }
    lcm = (m * n) / gcd;
    printf("LCM(%d,%d) = %d", m, n, lcm);
}