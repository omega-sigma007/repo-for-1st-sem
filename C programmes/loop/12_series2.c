// ∑n/n!
#include <stdio.h>
void main()
{
    int i, j, f = 1, n;
    double sum = 1;
    printf("Enter the range = ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("1/1!");
        for (i = 2; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                f = f * j;
            }
            sum = sum + i / (f * 1.0);
            printf(" + %d/%d!", i, i);
        }
        printf(" = %.25g", sum);
    }
}
