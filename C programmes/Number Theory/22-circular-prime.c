#include <stdio.h>
#include <math.h>
#include <windows.h>
void main()
{
    int n, i, j, x, f = 0, c = 0, div;
    printf("Enter n = ");
    scanf("%d", &n);
    // Digit count
    for (x = n; n > 0; n = n / 10)
        c++;
    div = pow(10, c - 1);
    for (i = 1, n = x; i <= c; i++)
    {
        for (j = 2; j * j <= n; j++)
            if (n % j == 0)
            {
                f = 1;
                break;
            }
        if (f == 1)
        {
            printf("\n%d is not a Prime no --> Divisible by %d", n, j);
            break;
        }
        printf("\n%d → Prime no", n);
        n = (n % div) * 10 + n / div;
    }
    if (f)
        printf("\n%d is not a Circular Prime!! ∵", n);
    else
        printf("\n%d is a Circular Prime!! ", n);
}
