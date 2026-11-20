#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("Before swap, a = %d\tb = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap, a = %d\tb = %d", a, b);

    return 0;
}