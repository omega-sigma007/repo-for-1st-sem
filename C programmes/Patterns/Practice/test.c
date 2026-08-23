#include <stdio.h>
void main()
{
    int i, j, n, sp;
    printf("n = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
            printf(" ");
        for (j = 2 * n - 1; j >= 2 * i - 1; j--)
            printf("%d", j);
        printf("\n");
    }
}