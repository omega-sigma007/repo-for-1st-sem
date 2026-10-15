#include <stdio.h>
int isPrime(int);
int main(void)
{
    int n, i;
    printf("Enter the no = ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0 && isPrime(i))
            printf("%d ", i);
    }
}
int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
