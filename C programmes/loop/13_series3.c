// 0 3 8 15 ...
#include <stdio.h>
void main()
{
    int i, j, f = 0, sum = 0, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("0");
        for (i = 3, j = 2; j <= n; i = i + f, j++)
        {
            printf(" + %d", i);
            f = 2 * j + 1;
            sum = sum + i;
        }
        printf(" = %d", sum);
        printf("\nSum upto %dth term = %d", n, sum);
    }
}