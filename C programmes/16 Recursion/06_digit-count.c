#include <stdio.h>
int count(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Count = %d", count(n));
}
int count(int n)
{
    if (n != 0)
        return 1 + count(n / 10);
    else
        return 0;
}