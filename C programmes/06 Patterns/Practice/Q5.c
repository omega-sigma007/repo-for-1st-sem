/*

         *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *

*/
#include <stdio.h>
void main()
{
    int i, j, n, sp, f, k = 0;
    printf("n = ");
    scanf("%d", &n);
    for (i = n - n / 2; i >= 1; i--, k++)
    {
        for (f = 0, j = 1; j <= i; j++, f = 1)
            printf(".");
        printf("*");
        for (f = 0, j = 1; j <= 2 * k - 1; j++, f = 1)
            printf(" ");
        if (f == 1)
            printf("*");
        printf("\n");
    }
    if (n % 2 == 0)
        k--;
    else
        k -= 2;
    for (i = n / 2; i >= 1; i--, k--)
    {
        for (j = n - n / 2; j >= i; j--)
            printf(".");
        printf("*");
        for (f = 0, j = 1; j <= 2 * k - 1; j++, f = 1)
            printf(" ");
        if (f == 1)
            printf("*");
        printf("\n");
    }
}