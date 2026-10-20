#include <stdio.h> // n! calc.
int fact(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("%d! = %d", n, fact(n));
}
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}