#include <stdio.h>
void main()
{
    // integer array defining
    int a[5] = {1, 2, 3, 40000, 500}, b[4] = {};
    printf("%d \n\n", a[4]);
    // b[6] = a;
    // printf("%d,%d,%d,%d,%d,\n\n", b[0], b[1], b[2], b[3], b[4]);

    for (int i = 0; i < 5; i++)
        printf("%d(%d)  ", a[i], &a[i]);
    printf("\n\n");

    for (int i = 0; i < 12; i++)
        printf("%d(%d)  ", b[i], &b[i]);
    printf("\n\n");

    int c[10] = {10, 20};
    for (int i = 0; i < 9; i++)
        printf("%d(%d)  ", c[i], &c[i]);
}