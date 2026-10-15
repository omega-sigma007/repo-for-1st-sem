#include <stdio.h>
int gcd(int, int);
int main(void)
{
    int a, b;
    printf("a,b = ");
    scanf("%d%d", &a, &b);
    printf("(%d,%d) is %sa Co-prime No", a, b, (gcd(a, b) == 1) ? "" : "not ");
}
int gcd(int a, int b)
{
    int gcd;
    for (int i = 1; i < a || i < b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    return gcd;
}
