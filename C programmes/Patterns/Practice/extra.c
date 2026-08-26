/*
-1---1
--1-1
---1
--1-1
-1---1
*/
#include <stdio.h>
void main()
{
    int i, j, k = 3, f = 0;
    for (i = 1; i <= 3; i++, k -= 2)
    {
        for (j = 1; j <= i; j++)
            printf("-");
        printf("1");
        for (j = 1, f = 0; j <= k; f = 1, j++)
            printf("-");
        if (f == 1)
            printf("1");
        printf("\n");
    }
    for (i = 2, k += 4; i >= 1; i--, k += 2)
    {
        for (j = 1; j <= i; j++)
            printf("-");
        printf("1");
        for (j = 1; j <= k; j++)
            printf("-");
        printf("1");
        printf("\n");
    }
}