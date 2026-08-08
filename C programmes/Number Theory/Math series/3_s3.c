// 2/3 4/5 8/7 16/9
#include <stdio.h>
void main()
{
    int n, p = 2, q = 3;
    float s = 0;
    printf("Enter the range. = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d/%d ", p, q);
        s = s + (float)p / (float)q;
        p = p * 2;
        q += 2;
    }
    printf("\nSum upto %dth term = %f", n, s);
}