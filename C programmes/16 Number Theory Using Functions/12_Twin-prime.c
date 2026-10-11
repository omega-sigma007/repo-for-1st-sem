#include <stdio.h>
int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main(void)
{
    int a, b;
    printf("a,b = ");
    scanf("%d%d", &a, &b);
    if (isPrime(a) && isPrime(b) && ((b - a) == 2 || (a - b) == 2))
        printf("Yes");
    else
        printf("No");
}