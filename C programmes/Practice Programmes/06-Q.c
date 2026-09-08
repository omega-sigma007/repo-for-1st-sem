#include <stdio.h>
#include <math.h>
void main()
{
    int a[20] = {0};
    a[0] = 1;
    printf("%d \n", a[1]);
    for (int i = 0; i < 20; i++)
        printf("%d ", a[i]);
    int x = 10, y = 20, r;
    r = fdim(x, y);
    printf("\n%d", r);
}