#include <stdio.h> // n! calc.
int sum(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}