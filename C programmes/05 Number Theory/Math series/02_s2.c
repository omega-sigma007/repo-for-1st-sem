// 4 8 16 32 64
#include <stdio.h>
void main()
{
    int n, t = 4, s = 0;
    printf("Enter the range. = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t);
        s = s + t;
        t = t * 2;
    }
    printf("\nSum upto %dth term = %d", n, s);
}