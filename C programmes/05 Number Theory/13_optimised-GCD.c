#include <stdio.h>
void main()
{
    int a, b, t;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("GCD(%d,%d) = ", a, b);
    while (b % a != 0)
    {
        t = b;
        b = a;
        a = t % a;
    }
    printf("%d", a);
}