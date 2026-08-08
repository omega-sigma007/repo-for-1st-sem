// 1/1! 1/3! 1/5! ...
#include <stdio.h>
void main()
{
    int n, c = 1, t = 1;
    float s = 0;
    printf("Enter the range. = ");
    scanf("%d", &n);
    for (int i = 1; c <= n; i++)
    {
        t = t * i;
        if (i % 2 == 1)
        {
            printf("1/%d  ", t);
            s = s + (float)1 / (float)t;
            c++;
        }
    }
    printf("\nSum upto %dth term = %f", n, s);
}