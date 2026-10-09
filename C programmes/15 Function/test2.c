#include <stdio.h>
void change(int[]);
void main()
{
    int a[2] = {10};
    change(a);
    printf("Change = %d,%d", a[0], a[1]);
}
void change(int x[])
{
    x[0] = 5;
    x[1] = 8;
    return;
}