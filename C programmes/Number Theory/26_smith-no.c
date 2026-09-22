#include <stdio.h>
int main()
{
    int i, n, x, temp, sod = 0, sof = 0;

    printf("Enter n = ");
    scanf("%d", &n);

    for (i = 2, x = n; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            sof += i;
        }
    }

    for (temp = x; n > 0 || temp > 0; temp /= 10, n /= 10)
    {
        sod += temp % 10;

        if (sof > 0)
            sof += n % 10;
    }

    printf("%d is%s a Smith no !!",
           x, (sof == sod) ? "" : " not");

    return 0;
}