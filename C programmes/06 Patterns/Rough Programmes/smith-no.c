#include <stdio.h>

void main()
{
    int n, x, i = 2, sof = 0, s = 0, t, temp;

    printf("Enter the number = ");
    scanf("%d", &n);

    x = n; // store original number

    // Factorization and sum of digits of factors
    while (i <= n)
    {
        if (n % i == 0)
        {
            temp = i;
            while (temp != 0)
            {
                sof += temp % 10; // add digits of factor
                temp /= 10;
            }
            n /= i;
        }
        else
            i++;
    }

    // Sum of digits of original number
    t = x;
    while (t != 0)
    {
        s += t % 10;
        t /= 10;
    }

    if (s == sof)
        printf("%d is a Smith Number.", x);
    else
        printf("%d is not a Smith Number.", x);
}