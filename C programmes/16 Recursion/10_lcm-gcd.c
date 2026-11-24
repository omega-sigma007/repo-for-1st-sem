#include <stdio.h> // n! calc.
int gcd(int a, int b)
{
    if (b % a == 0)
        return a;
    else
        return gcd(b % a, a);
}
int main(void)
{
    int a, b, x;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    x = gcd(a, b);
    printf("GCD(%d,%d) = %d\n", a, b, x);
    printf("LCM(%d,%d) = %d", a, b, (a * b) / x);
    return 0;
}