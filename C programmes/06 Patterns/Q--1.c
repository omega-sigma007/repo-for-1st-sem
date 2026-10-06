/*
1 2 3 4
2 3 4
3 4
4
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the rnge = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
}