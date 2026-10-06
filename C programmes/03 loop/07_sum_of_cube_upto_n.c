// 1^2+2^2+3^2+4^2+…+n^2 = sum
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter\nn = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i);
        sum = sum + i * i * i;
    }
    printf("\nSum upto %d^3 = %d", n, sum);
}