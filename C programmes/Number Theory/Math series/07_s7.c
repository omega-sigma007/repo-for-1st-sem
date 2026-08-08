// x-x+x-x+x ...
#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, i = 1, sg, s = 0, t = 1;
    printf("Enter the range. = ");
    scanf("%d", &n);
    printf("Enter x = ");
    scanf("%d", &x);
    for (; i <= n; i++)
    {
        sg = round(pow((-1), i + 1));
        t = sg * x;
        printf("%d ", t);
        s = s + t;
    }
    printf("\nSum upto %dth term = %d", n, s);
}