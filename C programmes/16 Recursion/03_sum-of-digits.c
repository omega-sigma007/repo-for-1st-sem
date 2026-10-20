#include <stdio.h> // n! calc.
int sod(int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("sod = %d", sod(n));
}
int sod(int n)
{
    if (n != 0)
        return n % 10 + sod(n / 10);
    else
        return 0;
}