// 0 5 10 17 26 37 ...
#include <stdio.h>
void main()
{
    int i, t, sum = 0, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 1, t = 1; i <= n; i++)
    {
        if (i == 1)
        {
            t = i * i - 1;
            printf("%d ", t);
        }
        else
        {
            t = i * i + 1;
            printf("%d ", t);
        }
        sum = sum + t;
    }
    printf("\nSum upto %dth term = %d", n, sum);
}