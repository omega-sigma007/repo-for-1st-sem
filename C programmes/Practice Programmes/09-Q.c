#include <stdio.h>
void main()
{
    int n = 10, i, F, c = 0;
    for (i = 2, F = 0; i * i <= n; i++, c++)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            F = 1;
            break;
        }
    }
    if (F == 0)
        printf("Prime");
    printf("\nc = %d", c);
}