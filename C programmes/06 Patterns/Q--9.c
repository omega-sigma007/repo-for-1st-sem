/*
9
9 7
9 7 5
9 7 5 3
9 7 5 3 1
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 2 * n - 1; i >= 1; i -= 2)
    {
        for (j = 2 * n - 1; j >= i; j -= 2)
            printf("%d ", j);
        printf("\n");
    }
}