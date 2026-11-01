// fact calculation
#include <stdio.h>
#define fact(x, f)               \
    for (int i = 1; i <= x; i++) \
        f *= i;
// #define fact(x) x *fact(x - 1)
int main()
{
    printf("%d ");
}