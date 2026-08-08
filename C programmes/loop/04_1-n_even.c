#include <stdio.h>
void main()
{
    int i, n, sum = 0; // 2 4 6 8
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum upto %d = %d", n, sum);
}