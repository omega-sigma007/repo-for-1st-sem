#include <stdio.h>
int Pow(int b, int p)
{
    if (p == 0)
        return 1;
    else
        return b * Pow(b, p - 1);
}
int main()
{
    int n, x, new = 0, i = 0;
    printf("n = ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10, i++)
    {
        if (n % 10 == 0)
            new += 1 * Pow(10, i);
        else
            new += (n % 10) * Pow(10, i);
    }
    printf("%d -> %d", x, new);

    return 0;
}