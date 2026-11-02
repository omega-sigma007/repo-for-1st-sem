#include <stdio.h>
#define sum(a, b) a + b
#define sub(a, b) a - b
#define input(x) \
    scanf("%d", &x);
int main()
{
    int x, y;
    printf("Input the 2 nos. = ");
    input(x);
    input(y);
    printf("Sum = %d\n", sum(x, y));
    printf("sub = %d", sub(x, y));
}