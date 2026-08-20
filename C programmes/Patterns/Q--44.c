/*
1
212
32123
4321234
*/
#include <stdio.h>
void main()
{
    int i, j, n, k;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        for (j = 2; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}