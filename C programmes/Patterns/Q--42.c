/*

1
2 3 2
4 5 6 5 4
*/
#include <stdio.h>
void main()
{
    int i, j, n, k = 1, t;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++, k++)
            printf("%d ", k);
        for (j = 2, t = k - 2; j <= i; j++, t--)
            printf("%d ", t);
        printf("\n");
    }
}