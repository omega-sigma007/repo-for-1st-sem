// 1+1+2+3+5+8+13+...
/*
1
1 1
1 1 2
1 1 2 3
*/
#include <stdio.h>
void main()
{
    int a = 0, b = 1, s, i = 1, n, j;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (; i <= n; i++)
    {
        for (j = 1, a = 0, b = 1; j <= i; j++)
        {
            printf("%d ", b);
            s = a + b;
            a = b;
            b = s;
        }
        printf("\n");
    }
}