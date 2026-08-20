/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
#include <stdio.h>
void main()
{
    int i, j, n, x, sp;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 1, x = n; i <= n; i++, x--)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (sp = 1; sp <= 2 * (x - 1); sp++)
            printf("  ");
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}