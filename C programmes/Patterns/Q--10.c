/*
9
7 9
5 7 9
3 5 7 9
1 3 5 7 9
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 2 * n - 1; i >= 1; i -= 2)
    {
        for (j = i; j <= 2 * n - 1; j += 2)
            printf("%d ", j);
        printf("\n");
    }
}