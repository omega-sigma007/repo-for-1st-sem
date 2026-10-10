#include <stdio.h>
void count(int);
int isPrime(int);
int main(void)
{
    int n;
    printf("Enter the no = ");
    scanf("%d", &n);
    printf("Prime nos upto %d = ", n);
    count(n);
}
void count(int x)
{
    for (int i = 2; i <= x; i++)
        if (isPrime(i))
            printf("%d ", i);
}
int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}