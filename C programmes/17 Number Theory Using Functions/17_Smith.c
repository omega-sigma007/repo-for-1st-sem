#include <stdio.h>
int sod(int);
int main(void)
{
    int n, i, j, x, sof = 0, s2;
    printf("Enter the no = ");
    scanf("%d", &n);
    for (x = n, i = 2; i * i <= n; i++)
    {
        for (j = i; n % j == 0; n /= j)
            sof += j;
    }
    sof += sod(n);
    s2 = sod(x);
    printf("%d is %sa Smith No", x, (sof == s2) ? "" : "not ");
}
int sod(int n)
{
    int s = 0;
    for (; n != 0; n /= 10)
        s += n % 10;
    return s;
}
