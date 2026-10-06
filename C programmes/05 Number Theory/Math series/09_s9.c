// x^2-x^5+x^8-x^11+x^14
#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, i = 1, sg, p = 2, s = 0, t = 1;
    printf("Enter the range. = ");
    scanf("%d", &n);
    printf("Enter x = ");
    scanf("%d", &x);
    for (; i <= n; i++, p += 3, s = s + t)
    {
        sg = round(pow((-1), i + 1));
        t = sg * round(pow(x, p));
        printf("%d ", t);
        // s = s + t;
    }
    printf("\nSum upto %dth term = %d", n, s);
}