#include <stdio.h>
int fact(int);
int isK(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("%d is %sa Smith No", n, (n == isK(n)) ? "" : "not ");
}
int isK(int x)
{
    int s = 0;
    for (; x != 0; x /= 10)
        s += fact(x % 10);
    return s;
}
int fact(int x)
{
    int i, f = 1;
    for (i = 2; i <= x; i++)
        f *= i;
    return f;
}