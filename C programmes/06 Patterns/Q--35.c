/*
* * * * * * * * * *                  **********
* * * *     * * * *                  ****  ****
* * *         * * *                  ***    ***
* *             * *                  **      **
*                 *                  *        *
* *             * *                  **      **
* * *         * * *                  ***    ***
* * * *     * * * *                  ****  ****
* * * * * * * * * *                  **********

*/

#include <stdio.h>
void main()
{
    int i, j, sp, k = 1;
    for (i = 5; i >= 1; i--, k++)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        for (sp = 1; sp <= 2 * k; sp++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    k--;
    for (i = 1; i <= 5; i++, k--)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        for (sp = 1; sp <= 2 * k; sp++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}