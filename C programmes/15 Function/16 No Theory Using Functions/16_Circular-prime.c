#include <stdio.h>
#include <math.h>
int isCPrime(int);
int isPrime(int);
int digCount(int);
int main(void)
{
    int n;
    printf("Enter the no = ");
    scanf("%d", &n);
    printf("%d is %sa Circular Prime no.", n, (isCPrime(n)) ? "" : "not ");
}
int isCPrime(int x)
{
    int c = digCount(x), div;
    for (int i = 0; i < c; i++)
    {
        if (!(isPrime(x)))
            return 0;
        div = round(pow(10, c - 1));
        x = (x % div) * 10 + (x / div);
    }
    return 1;
}
int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int digCount(int x)
{
    int c = 0;
    for (; x != 0; x /= 10)
        c++;
    return c;
}
