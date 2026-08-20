/*

    *
   * *
  *   *
 *     *
  *   *
   * *
    *

*/
#include <stdio.h>
int main()
{
    int i, j, k = 0, sp, n, f;
    printf("n = ");
    scanf("%d", &n);
    for (i = 1; i <= n - n / 2; i++, k++)
    {
        for (j = i; j <= n - n / 2; j++)
            printf(".");
        printf("*");
        for (sp = 1, f = 0; sp <= 2 * k - 1; f = 1, sp++)
            printf(".");
        if (f == 1)
            printf("*");
        printf("\n");
    }
    (n % 2 != 0) ? k -= 2 : k--;
    for (i = n / 2; i >= 1; i--, k--)
    {
        for (j = n - n / 2; j >= i; j--)
            printf(".");
        printf("*");
        for (sp = 1, f = 0; sp <= 2 * k - 1; f = 1, sp++)
            printf(".");
        if (f == 1)
            printf("*");
        printf("\n");
    }
}
