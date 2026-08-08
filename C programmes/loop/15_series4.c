// 1+11+111+1111+11111+...
#include <stdio.h>
void main()
{
    int i, c, sum = 0, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = c = 1; c <= n; c++, i = i * 10 + 1)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("= %d", sum);
}