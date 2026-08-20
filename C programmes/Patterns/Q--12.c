/*
4
3 4
2 3 4
1 2 3 4
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
}