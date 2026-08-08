#include <stdio.h> //sir
void main()
{
    int n, m, i = 2, p, q, lcm = 1;
    printf("Enter the 2 no. = ");
    scanf("%d%d", &m, &n);
    for (p = m, q = n; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            lcm = lcm * i;
            m = m / i;
            n = n / i;
        }
    }
    lcm = lcm * m * n;
    printf("LCM(%d,%d) = %d", p, q, lcm);
}