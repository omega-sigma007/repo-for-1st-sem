/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
#include <stdio.h>
void main()
{
    int i, j, n, k;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1, k = i; j <= i; j++, k++)
            printf("%d ", k);
        printf("\n");
    }
}