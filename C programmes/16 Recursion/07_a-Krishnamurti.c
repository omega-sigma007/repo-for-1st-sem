#include <stdio.h>
int soFact(int);
int fact(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Sum of factorials = %d", soFact(n));
}
int soFact(int n)
{
    if (n != 0)
        return fact(n % 10) + soFact(n / 10);
    else
        return 0;
}
int fact(int n)
{
    if (n != 0)
        return n * fact(n - 1);
    else
        return 1;
}