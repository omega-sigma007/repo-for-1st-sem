#include <stdio.h>
int isTsPrime(int);
int isPrime(int);
int rev(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("%d is %sa Twisted Prime No", n, (isTsPrime(n)) ? "" : "not ");
}
int isTsPrime(int x)
{
    if (isPrime(x) && isPrime(rev(x)))
        return 1;
    return 0;
}
int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int rev(int x)
{
    int r = 0;
    for (; x != 0; x /= 10)
        r = r * 10 + x % 10;
    return r;
}