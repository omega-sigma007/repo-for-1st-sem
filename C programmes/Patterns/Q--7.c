/*
1 3 5 7 9
1 3 5 7
1 3 5
1 3
1
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j += 2)
            printf("%d ", j);
        printf("\n");
    }
}