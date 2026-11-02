#include <stdarg.h>
#include <stdio.h>
void show(int n, ...)
{
    va_list ap;
    va_start(ap, n);
    printf("count = %d :", n);
    while (n-- > 0)
    {
        int i = va_arg(ap, int);
        printf("%d", i);
    }
    printf("\n");
    va_end(ap);
}
int main()
{
    show(1, 1);
    show(3, 1, 2, 3);
    return 0;
}