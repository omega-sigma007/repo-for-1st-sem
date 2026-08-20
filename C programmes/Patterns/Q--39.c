/*

1 2 3 4 4 3 2 1
1 2 3 * * 3 2 1
1 2 * * * * 2 1
1 * * * * * * 1

*/
#include <stdio.h>
void main()
{
    int i, j, n, k = 0;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--, k += 2)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (j = 1; j <= k; j++)
            printf("* ");
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}