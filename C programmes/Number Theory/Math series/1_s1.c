// 2 5 8 11 14
#include <stdio.h>
void main()
{
    int n, t = 2, s = 0;
    printf("Enter the range. = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t);
        s = s + t;
        t += 3;
    }
    printf("\nSum upto %dth term = %d", n, s);
}