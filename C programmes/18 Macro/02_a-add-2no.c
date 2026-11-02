#include <stdio.h>
#define sum() a + b
#define sub() a - b
#define input(x) \
    scanf("%d", &x);
int main()
{
    int a, b;
    printf("Input the 2 nos. = ");
    input(a);
    input(b);
    printf("Sum = %d\n", sum());
    printf("sub = %d", sub());
}