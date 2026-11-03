#include <stdio.h>
static int fact(int f)
{
    if (f == 0 || f == 1)
        return 1;
    else
        return f * fact(f - 1);
}
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return fact(n % 10) + sum(n / 10);
}
int main(int argc, char *argv[])
{
    if (argc == 2)
        printf("Sum = %d", sum(atoi(argv[1])));
}