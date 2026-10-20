#include <stdio.h> // n! calc.
int rev(int, int);
int power(int, int);
int count(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("rev = %d", rev(n, count(n)));
}
int rev(int n, int len)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) * power(10, len - 1) + rev(n / 10, len - 1);
}
int power(int base, int index)
{
    if (index == 0 && base != 0)
        return 1;
    else
        return base * power(base, index - 1);
}
int count(int n)
{
    if (n != 0)
        return 1 + count(n / 10);
    else
        return 0;
}