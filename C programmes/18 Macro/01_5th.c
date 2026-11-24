// fact calculation
#include <stdio.h>
#define fact                         \
    for (int f = i = 1; i <= x; i++) \
        f *= i;
// #define fact(x) x *fact(x - 1)
int main()
{
    int x, f;
    printf("x = ");
    scanf("%d", &x);
    fact;
    printf("%d! = %d", x, fact);
}