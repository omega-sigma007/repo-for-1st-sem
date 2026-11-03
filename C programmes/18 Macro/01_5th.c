// fact calculation
#include <stdio.h>
#define fact(x)                     \
    for (i = 1, f = 1; i <= x; i++) \
        f *= i;
// #define fact(x) x *fact(x - 1)
int main(int argc, char *argv[])
{
    int f, i;
    fact(atoi(argv[1]));
    printf(" %d", f);
    return 0;
}