/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    **      **
    ***    ***
    ****  ****
    **********


 */
#include <stdio.h>
void main()
{
    int i, j, n, sp, k = 0;
    printf("n = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--, k++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (sp = 1; sp <= 2 * k; sp++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (k -= 2, i = 2; i <= n; i++, k--)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (sp = 1; sp <= 2 * k; sp++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}