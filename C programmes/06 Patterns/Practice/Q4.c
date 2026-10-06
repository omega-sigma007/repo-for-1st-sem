/*
***********
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
***********

*/
#include <stdio.h>
void main()
{
    int i, j, n, sp, f, k = 0;
    printf("n = ");
    scanf("%d", &n);
    for (f = 0, i = n; i >= 1; i--, k++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == n)
                break;
            else
                printf("*");
        }
        for (sp = 1; sp <= 2 * k - 1; sp++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (f = 0, k -= 2, i = 2; i <= n; i++, k--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == n)
                break;
            else
                printf("*");
        }
        for (sp = 1; sp <= 2 * k - 1; sp++)
            (k == 0) ? printf("*") : printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}