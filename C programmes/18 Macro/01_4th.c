#include <stdio.h>
#define loopi(x, i, c, inc) \
    for (x = i; x <= c; x += inc)
#define loopd(x, i, c, dec) \
    for (x = i; x >= c; x -= dec)
#define enter printf("\n");
int main()
{
    int n;
    loopi(n, 1, 5, 1)
        printf("%d ", n);
    enter;
    loopd(n, 5, 1, 1)
        printf("%d ", n);
}