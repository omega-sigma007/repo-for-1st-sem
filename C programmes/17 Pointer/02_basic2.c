// pass by ref. ex
#include <stdio.h>
void swap(int *, int *);
void _swap(int, int);
int main(void)
{
    int a, b;
    printf("Input = ");
    scanf("%d%d", &a, &b);
    _swap(a, b);
    printf("After call by value : a = %d,b = %d\n", a, b);
    swap(&a, &b);
    printf("After call by reference : a = %d  ,  b = %d\n", a, b);
}
void swap(int *x, int *y)
{
    int t;
    t = *x, *x = *y, *y = t;
}
void _swap(int x, int y)
{
    int t;
    t = x, x = y, y = t;
}
